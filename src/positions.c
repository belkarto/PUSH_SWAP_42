/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:29:58 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/25 05:06:22 by belkarto         ###   ########.fr       */
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

void	mov_count_fir(t_pos **pos,  int ind, int i)
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

void	mov_count_last(t_pos **pos,  int ind, int j)
{
	int a;
	int	b;
	int moves;

	a = j - (**pos).len_a;
	b = get_b((**pos).len_b, ind);
	moves = ft_moves_last(a, b);
	if (ind == 0)
	{
		(**pos).pos_a = a;
		(**pos).pos_b = ind;
		(**pos).moves = moves;
	}
	if (moves < (**pos).moves)
	{
		(**pos).pos_a = a;
		(**pos).pos_b = b;
		(**pos).moves = moves;
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
	if (ind > len / 2)
		return (ind - len);
	else
		return (ind);
}

int	ft_moves_max(int a, int b)
{
	if (a > 0)
		return (ft_moves_fir(a, b));
	else
		return (ft_moves_last(a, b));
}

void	max_pos(t_pos **pos, int ind)
{
	int	a;
	int	b;
	int moves;

	a = max_ind((**pos).arr_a, (**pos).len_a);
	b = get_b((**pos).len_b, ind);
	moves = ft_moves_max(a, b);
	if (ind == 0)
	{
		(**pos).pos_b = 0;
		(**pos).pos_a = a;
		(**pos).moves = ft_moves_max(a, ind);
	}
	if (moves < (**pos).moves)
	{
		(**pos).pos_a = a;
		(**pos).pos_b = b;
		(**pos).moves = moves;
	}
}

void	ft_check_top(t_pos **pos, int i)
{
	int	ind;
	int	pos_b;

	pos_b = get_b((**pos).len_b, i);
	ind = max_ind((**pos).arr_a, (**pos).len_a);
	if(ind == -1 && (**pos).arr_b[i] < (**pos).arr_a[0])
	{
		(**pos).pos_a = 0;
		(**pos).pos_b = get_b((**pos).len_b, i);
		(**pos).moves = ft_moves_fir(0, pos_b);
	}
	else if((**pos).arr_a[0] > (**pos).arr_b[i]
			&& (**pos).arr_a[(**pos).len_a - 1] < (**pos).arr_b[i])
	{
		(**pos).pos_a = 0;
		(**pos).pos_b = get_b((**pos).len_b, i);
		(**pos).moves = ft_moves_fir(0, pos_b);
	}
}
