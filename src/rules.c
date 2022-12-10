/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:37:05 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/10 00:43:30 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printer(t_list_int *lst)
{
	t_list_int	*list;

	list = lst;
	if (list == NULL)
	{
		ft_printf("empty");
		return ;
	}
	while (list != NULL)
	{
		ft_printf("%d\n", list->content);
		list = list->next;
	}
}

void	ft_swap(t_list_int *stack, char c)
{
	int	tmp;

	tmp = stack->next->content;
	stack->next->content = stack->content;
	stack->content = tmp;
	if (c == 'a')
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}

void	ft_push(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int	*head_a;

	head_a = *stack_a;
	*stack_a = head_a->next;
	head_a->next = *stack_b;
	*stack_b = head_a;
}

void	ft_rotate(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	lst = *stack;
	*stack = lst->next;
	lst->next = NULL;
	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = lst;
	ft_printer(*stack);
}

void	ft_rev_rotate(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	lst = *stack;
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
}
