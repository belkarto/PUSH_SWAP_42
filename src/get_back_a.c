/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_back_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:06:17 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/21 00:11:55 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos_a(t_pos pos)
{
}

int	get_best(t_list_int *stack_a, t_list_int *stack_b)
{
	t_pos	pos;
	int		pos_b;
	int		i;
	int		moves;

	i = 0;
	pos.len_a = ft_lstsize_int(stack_a);
	pos.len_b = ft_lstsize_int(stack_b);
	pos.arr_a = ft_get_arr(stack_a, pos.len_a);
	pos.arr_b = ft_get_arr(stack_b, pos.len_b);
	while (i < pos.len_b)
	{
		get_pos_a(pos);
	}
}

void get_back_a(t_list_int **stack_a, t_list_int **stack_b)
{
	int	best_to_move;

	best_to_move = get_best(*stack_a, *stack_b);
}
