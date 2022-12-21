/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:37:05 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/20 20:52:51 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
