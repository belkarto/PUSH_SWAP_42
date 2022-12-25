/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:58:18 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/25 04:58:09 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rb(t_list_int **stack)
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
	ft_printf("rb\n");
}

void	ft_rr(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int	*lst_a;
	t_list_int	*tmp_a;
	t_list_int	*lst_b;
	t_list_int	*tmp_b;

	lst_a = *stack_a;
	*stack_a = lst_a->next;
	lst_a->next = NULL;
	tmp_a = *stack_a;
	while (tmp_a->next)
		tmp_a = tmp_a->next;
	tmp_a->next = lst_a;
	lst_b = *stack_b;
	*stack_b = lst_b->next;
	lst_b->next = NULL;
	tmp_b = *stack_b;
	while (tmp_b->next)
		tmp_b = tmp_b->next;
	tmp_b->next = lst_b;
	ft_printf("rr\n");
}

void	ft_rra(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	lst = *stack;
	if (*stack == NULL)
		return ;
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	if (*stack == NULL)
		return ;
	lst = *stack;
	while (lst->next->next != NULL)
		lst = lst->next;
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int	*lst_a;
	t_list_int	*tmp_a;
	t_list_int	*lst_b;
	t_list_int	*tmp_b;

	lst_a = *stack_a;
	while (lst_a->next->next != NULL)
		lst_a = lst_a->next;
	tmp_a = lst_a->next;
	lst_a->next = NULL;
	tmp_a->next = *stack_a;
	*stack_a = tmp_a;
	lst_b = *stack_b;
	while (lst_b->next->next != NULL)
		lst_b = lst_b->next;
	tmp_b = lst_b->next;
	lst_b->next = NULL;
	tmp_b->next = *stack_b;
	*stack_b = tmp_b;
	ft_printf("\rrrr\n");
}
