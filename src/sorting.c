/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:07:30 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/06 21:23:17 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	sort_two(t_list_int **sta)
{
	if ((**sta).content > (**sta).next->content)
		ft_sa(*sta);
	return ;
}

void	sort_stack(t_list_int **stack_a, t_list_int **stack_b)
{
	int	len;

	len = ft_lstsize_int(*stack_a);
	if (len == 3)
		sort_three(stack_a);
	else if (len == 2)
		sort_two(stack_a);
	else if (len == 5)
		five_args(stack_a, stack_b);
	else if (len == 4)
	{
		get_the_smallest(&stack_a);
		ft_pb(stack_a, stack_b);
		sort_three(stack_a);
		ft_pa(stack_a, stack_b);
	}
	else if (len > 5)
		longest_incresing_subseq(stack_a, stack_b);
	else
		return ;
}
