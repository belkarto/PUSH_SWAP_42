/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:25:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/17 07:30:36 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check(t_list_int **stack)
{
	t_list_int *list;

	list = *stack;
	if (list->content > list->next->next->content)
		ft_ra(stack);
	else if (list->content > list->next->content)
		ft_sa(*stack);
}

static void push_the_smallest(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int	*stack;

	stack = *stack_a;
	if (stack->content > stack->next->content)
		ft_sa(*stack_a);
	ft_pb(stack_a, stack_b);
}

void	five_args(t_list_int **stack_a, t_list_int **stack_b)
{
	t_list_int *stack1;
	t_list_int *stack2;

	stack1 = *stack_a;
	stack2 = *stack_b;
	
	push_the_smallest(stack_a, stack_b);
	push_the_smallest(stack_a, stack_b);
	sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	check(stack_a);
	ft_pa(stack_a, stack_b);
	check(stack_a);
}
