/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:02:43 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/01 18:02:45 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_ra(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	if (*stack == NULL)
		return ;
	lst = *stack;
	*stack = lst->next;
	lst->next = NULL;
	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = lst;
}

void	ft_print_stack(t_list_int *stack_a, t_list_int *stack_b)
{
	t_list_int	*list;
	t_list_int	*list2;

	list = stack_a;
	list2 = stack_b;
	while (1)
	{
		if (list == NULL)
			ft_printf("   | ");
		else
		{
			ft_printf("%d | ", list->content);
			list = list->next;
		}
		if (list2 == NULL)
			ft_printf("\t\n");
		else
		{
			ft_printf("%d\t\n", list2->content);
			list2 = list2->next;
		}
		if (list == NULL && list2 == NULL)
			return ;
	}
}

