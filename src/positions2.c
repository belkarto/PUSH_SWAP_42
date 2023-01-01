/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 08:19:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/31 08:25:15 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_b(int len_b, int b)
{
	if (b == 0)
		return (0);
	if (b <= len_b / 2)
		return (b);
	else
		return (b - len_b);
}

int	ft_moves_fir(int a, int b)
{
	int	moves;

	if (a >= 0 && b >= 0)
	{
		if (a > b)
			moves = a;
		else
			moves = b;
	}
	else
	{
		moves = a + (-1 * b);
	}
	return (moves);
}

int	ft_moves_last(int a, int b)
{
	int	moves;

	if (a <= 0 && b <= 0)
	{
		if (a < b)
			moves = -1 * a;
		else
			moves = -1 * b;
	}
	else
	{
		moves = (-1 * a) + b;
	}
	return (moves);
}

void	mov_count_fir(t_pos **pos, int ind, int i)
{
	int	moves;
	int	b;

	if (ind == 0)
	{
		(**pos).pos_a = i;
		(**pos).pos_b = ind;
		(**pos).moves = i;
		return ;
	}
	b = get_b((**pos).len_b, ind);
	moves = ft_moves_fir(i, b);
	if (moves < (**pos).moves)
	{
		(**pos).moves = moves;
		(**pos).pos_a = i;
		(**pos).pos_b = b;
	}
}
