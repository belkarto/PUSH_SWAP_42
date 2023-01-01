/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:29:58 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/31 08:30:26 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	mov_count_last(t_pos **pos, int ind, int j)
{
	int	a;
	int	b;
	int	moves;

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
	int	num;
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
	int	moves;

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
	if (ind == -1 && (**pos).arr_b[i] < (**pos).arr_a[0])
	{
		(**pos).pos_a = 0;
		(**pos).pos_b = get_b((**pos).len_b, i);
		(**pos).moves = ft_moves_fir(0, pos_b);
	}
	else if ((**pos).arr_a[0] > (**pos).arr_b[i]
		&& (**pos).arr_a[(**pos).len_a - 1] < (**pos).arr_b[i])
	{
		(**pos).pos_a = 0;
		(**pos).pos_b = get_b((**pos).len_b, i);
		(**pos).moves = ft_moves_fir(0, pos_b);
	}
}
