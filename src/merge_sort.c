/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 03:17:05 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/17 08:09:46 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split(t_list_int *source, t_list_int **frontRef, t_list_int **backRef)
{
	t_list_int	*fast;
	t_list_int	*slow;

	slow = source;
	fast = source->next;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*frontRef = source;
	*backRef = slow->next;
	slow->next = NULL;
}

t_list_int	*sortedmerge(t_list_int *a,  t_list_int *b)
{
	t_list_int* result = NULL;

	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);

	if (a->content <= b->content)
	{
		result = a;
		result->next = sortedmerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = sortedmerge(a, b->next);
	}
	return (result);
}

void	merge_sort(t_list_int **headRef)
{
	t_list_int	*head = *headRef;
	t_list_int	*a;
	t_list_int	*b;

	if ((head == NULL) || (head->next == NULL))
		return ;
	split(head, &a, &b);
	merge_sort(&a);
	merge_sort(&b);
	*headRef = sortedmerge(a, b);
}

