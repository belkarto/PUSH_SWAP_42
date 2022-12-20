/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:07:30 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/18 09:07:44 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_stack(t_list_int **stack_a, t_list_int **stack_b)
{
	int	len;

	len = ft_lstsize_int(*stack_a);
	if (len == 3)
		sort_three(stack_a);
	else if (len == 5)
		five_args(stack_a, stack_b);	
	else if (len > 5)
		longest_incresing_subseq(stack_a, stack_b);	
	else
		return ;
}
