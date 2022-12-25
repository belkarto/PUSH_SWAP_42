/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:29:58 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/25 01:37:27 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	counter(t_pos **pos, int pos_a, int pos_b)
{
	int	a;
	int	b;
	int	moves;

	if (pos_b == 0)
	{
		(**pos).pos_a = pos_a;
		(**pos).pos_b = 0;
		(**pos).moves = pos_a;
		return ;
	}
	if (pos_a > (**pos).len_a / 2)
	{
		moves = (**pos).len_a - pos_a;
		a = pos_a - (**pos).len_a;
	}
	else
	{
		a = pos_a;
		moves = a;
	}
	if (pos_b > (**pos).len_b / 2)
	{
		moves += (**pos).len_b - pos_b;
		b = pos_b - (**pos).len_b;
	}
	else
	{
		b = pos_b;
		moves += b;
	}
	if (moves < (**pos).moves)
	{
		(**pos).pos_b = b;
		(**pos).pos_a = a;
		(**pos).moves = moves;
	}
}

void	mov_count_fir(t_pos **pos,  int ind, int i)
{
	/*int	moves;

	if (ind == 0)
	{
		(**pos).moves = i;
		(**pos).pos_a = i;
		(**pos).pos_b = 0;
	}
	else
	{
		moves = i + ind ;	
		if (moves < (**pos).moves)
		{
			ft_printf("<<<- %d ->>>\n", ind);
			(**pos).moves = moves;
			(**pos).pos_a = i;
			if (ind+1 >= (**pos).len_b / 2)
				(**pos).pos_b = ind - (**pos).pos_b;
			else
				(**pos).pos_b = ind;
		}
	}*/
	counter(pos, i, ind);
}

void	mov_count_last(t_pos **pos,  int ind, int j)
{
	int	moves;

	if (ind == 0)
	{
		(**pos).moves = ((**pos).len_a - j);
		(**pos).pos_a = j - (**pos).len_a;
		(**pos).pos_b = ind;
	}
	else
	{
		moves = ((**pos).len_b - j) + ind;	
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

int	max_ind(int *arr, int len)
{
	int	i;
	int num;
	int	ind;

	i = 0;
	ind = i;
	num = arr[i];
	while (++i < len)
	{
		if (arr[i] > num)
		{
			num = arr[i];
			ind = i;
		}
	}
	ind++;
	return (ind);
}


void	max_pos(t_pos **pos, int ind)
{
	int	moves_in_a;

	moves_in_a = max_ind((**pos).arr_a, (**pos).len_a);
	counter(pos, moves_in_a, ind);
	return ;
}
