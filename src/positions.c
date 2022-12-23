/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:29:58 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/23 16:24:41 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	mov_count_fir(t_pos **pos,  int ind, int i)
{
	int	moves;

	if (ind == 0)
	{
		(**pos).moves = i + 1;
		(**pos).pos_a = i;
		(**pos).pos_b = ind;
	}
	else
	{
		moves = i + ind + 1;	
		if (moves < (**pos).moves)
		{
			(**pos).moves = moves;
			(**pos).pos_a = i;
			if (ind > (**pos).len_b / 2)
				(**pos).pos_b = ind - (**pos).pos_b;
			else
				(**pos).pos_b = ind;
		}
	}
}

void	mov_count_last(t_pos **pos,  int ind, int j)
{
	int	moves;

	if (ind == 0)
	{
		(**pos).moves = ((**pos).len_a - j) + 1;
		(**pos).pos_a = j - (**pos).len_a;
		(**pos).pos_b = ind;
	}
	else
	{
		moves = ((**pos).len_b - j) + ind + 1;	
		if (moves < (**pos).moves)
		{
			(**pos).moves = moves;
			(**pos).pos_a = j - (**pos).len_a;;
			if (ind > (**pos).len_b / 2)
				(**pos).pos_b = ind - (**pos).pos_b;
			else
				(**pos).pos_b = ind;
		}
	}
}

void	max_pos(t_pos **pos, int ind)
{
	int max;
	int	i;

	i = 0;
	max = (**pos).arr_a[0];
	(**pos).pos_a = i;
	while (++i < (**pos).len_a)
	{
		if (max < (**pos).arr_a[i])
		{
			max = (**pos).arr_a[i];
			(**pos).pos_a = i;
		}
	}
	if ((**pos).pos_a > (**pos).len_a/2)
	{
		(**pos).pos_a = (**pos).pos_a - (**pos).len_a;
		{
			if (ind > (**pos).len_b / 2)
			{
				(**pos).pos_b = ind - (**pos).pos_b;
				(**pos).moves = (**pos).len_a - (**pos).pos_a + (-(**pos).pos_b) + 1;
			}
			else
			{
				(**pos).pos_b = ind;
				(**pos).moves = (**pos).len_a - (**pos).pos_a + ind + 1;
			}
		}
	}
	else
	{
		(**pos).moves = (**pos).pos_a + ind + 1;
		if (ind > (**pos).len_b / 2)
			(**pos).pos_b = ind - (**pos).pos_b;
		else
			(**pos).pos_b = ind;
	}
}
