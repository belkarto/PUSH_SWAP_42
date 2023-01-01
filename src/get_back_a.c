/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_back_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:06:17 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/25 05:37:59 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_moves_top(t_pos **pos, int ind)
{
	int	b;
	int	moves;

	if (ind <= (**pos).len_b / 2)
	{
		b = ind;
		moves = b;
	}
	else
	{
		b = ind - (**pos).len_b;
		moves = b * -1;
	}
	if (moves < (**pos).moves || ind == 0)
	{
		(**pos).pos_b = b;
		(**pos).pos_a = 0;
		(**pos).moves = moves;
		return (1);
	}
	return (0);
}

void	get_pos_a(t_pos *pos, int ind)
{
	int	i;
	int	j;

	i = -1;
	j = pos->len_a / 2;
	if ((pos->arr_a[0] > pos->arr_b[ind]
			&& pos->arr_a[pos->len_a - 1] < pos->arr_b[ind]))
	{
		if (ft_moves_top(&pos, ind) == 1)
			return ;
	}
	while (++i <= j)
	{
		if (pos->arr_a[i] < pos->arr_b[ind]
			&& pos->arr_a[i + 1] > pos->arr_b[ind])
			return (mov_count_fir(&pos, ind, i + 1));
	}
	while (++j < pos->len_a - 1)
	{
		if (pos->arr_a[j] < pos->arr_b[ind]
			&& pos->arr_a[j + 1] > pos->arr_b[ind])
			return (mov_count_last(&pos, ind, ++j));
	}
	return (max_pos(&pos, ind));
}

t_pos	get_best(t_list_int *stack_a, t_list_int *stack_b)
{
	t_pos	pos;
	int		i;

	i = -1;
	pos.len_a = ft_lstsize_int(stack_a);
	pos.len_b = ft_lstsize_int(stack_b);
	pos.arr_a = ft_get_arr(stack_a, pos.len_a);
	pos.arr_b = ft_get_arr(stack_b, pos.len_b);
	while (++i < pos.len_b)
		get_pos_a(&pos, i);
	free(pos.arr_a);
	free(pos.arr_b);
	return (pos);
}

void	get_back_a(t_list_int **stack_a, t_list_int **stack_b)
{
	t_pos	best_to_move;

	while (ft_lstsize_int(*stack_b) != 0)
	{
		best_to_move = get_best(*stack_a, *stack_b);
		move_it(best_to_move, stack_a, stack_b);
	}
	get_the_smallest(&stack_a);
}
