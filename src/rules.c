/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:37:05 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/19 20:37:29 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list_int *stack_a, t_list_int *stack_b)
{
	t_list_int	*list;
	t_list_int	*list2;

	list = stack_a;
	list2 = stack_b;
	while (1)
	{
		if (list == NULL)
			ft_printf("  | ");
		else
		{
			ft_printf("%d | ", list->content);
			list = list->next;
		}
		if (list2 == NULL)
			ft_printf(" \n");
		else
		{
			ft_printf("%d\n", list2->content);
			list2 = list2->next;
		}
		if (list == NULL && list2 == NULL)
			return ;
	}
}

void	ft_sa(t_list_int *stack)
{
	int	tmp;

	tmp = stack->next->content;
	stack->next->content = stack->content;
	stack->content = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_list_int *stack)
{
	int	tmp;

	tmp = stack->next->content;
	stack->next->content = stack->content;
	stack->content = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_list_int *stack_a, t_list_int *stack_b)
{
	int	tmp;
	int	tmp1;

	tmp = stack_a->next->content;
	stack_a->next->content = stack_a->content;
	stack_a->content = tmp;
	tmp1 = stack_b->next->content;
	stack_b->next->content = stack_b->content;
	stack_b->content = tmp1;
	ft_printf("ss\n");
}

void	ft_pb(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int	*head_a;

	if (*stack_a == NULL)
		return ;
	head_a = *stack_a;
	*stack_a = head_a->next;
	head_a->next = *stack_b;
	*stack_b = head_a;
	ft_printf("pb\n");
}

void	ft_pa(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int	*head_a;

	if (*stack_b == NULL)
		return ;
	head_a = *stack_b;
	*stack_b = head_a->next;
	head_a->next = *stack_a;
	*stack_a = head_a;
	ft_printf("pa\n");
}

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
	ft_printf("ra\n");
}

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
	*stack_a = tmp_b;
	lst_b = *stack_b;
	while (lst_b->next->next != NULL)
		lst_b = lst_b->next;
	tmp_b = lst_b->next;
	lst_b->next = NULL;
	tmp_b->next = *stack_b;
	*stack_b = tmp_b;
	ft_printf("rrr\n");
}
