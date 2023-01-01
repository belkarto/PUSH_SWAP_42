/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:25:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/23 15:50:29 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	five_args(t_list_int **stack_a, t_list_int **stack_b)
{
	get_the_smallest(&stack_a);
	ft_pb(stack_a, stack_b);
	get_the_smallest(&stack_a);
	ft_pb(stack_a, stack_b);
	sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
