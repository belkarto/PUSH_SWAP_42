/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 08:54:17 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/23 15:31:43 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_get_arr(t_list_int *list, int len)
{
	int	i;
	int	*arr;

	arr = ft_calloc(sizeof(int), len);
	i = 0;
	while (i < len)
	{
		arr[i] = list->content;
		list = list->next;
		i++;
	}
	return (arr);
}

int	*ft_long_inc_subseq(int *arr, t_lis lis, int *lis_len, int len)
{
	int	num;
	int	i;
	int	index;

	i = 0;
	num = lis.length[i];
	while (++i < len)
	{
		if (num < lis.length[i])
		{
			num = lis.length[i];
			index = i;
		}
	}
	*lis_len = num;
	lis.lis = ft_calloc(num--, sizeof(int));
	while (num >= 0)
	{
		lis.lis[num--] = arr[index];
		index = lis.sub_seq[index];
	}
	return (lis.lis);
}

int	*ft_lis(int *arr, int len, int *lis_len)
{
	t_lis	lis;

	lis.length = ft_calloc(sizeof(int), len);
	lis.sub_seq = ft_calloc(sizeof(int), len);
	lis.i = -1;
	while (++lis.i < len)
		lis.length[lis.i] = 1;
	lis.i = 0;
	while (++lis.i < len)
	{
		lis.j = -1;
		while (++lis.j < lis.i)
		{
			if (arr[lis.j] < arr[lis.i]
				&& lis.length[lis.i] <= lis.length[lis.j] + 1)
			{
				lis.sub_seq[lis.i] = lis.j;
				lis.length[lis.i] = lis.length[lis.j] + 1;
			}
		}
	}
	lis.lis = ft_long_inc_subseq(arr, lis, lis_len, len);
	return (lis.lis);
}

int	in_arr(int num, int *arr, int len)
{
	int	i;

	i = -1;
	while (++i < len)
	{
		if (arr[i] == num)
			return (1);
	}
	return (0);
}

void	longest_incresing_subseq(t_list_int **stack_a, t_list_int **stack_b)
{
	int			*arr;
	int			*lis;
	int			len;
	int			stack_len;

	stack_len = ft_lstsize_int(*stack_a);
	//get_the_smallest(&stack_a);
	arr = ft_get_arr(*stack_a, stack_len);
	lis = ft_lis(arr, stack_len, &len);
	while (len < stack_len)
	{
		if (in_arr((**stack_a).content, lis, len) == 0)
		{
			stack_len--;
			ft_pb(stack_a, stack_b);
		}
		else
			ft_ra(stack_a);
	}
	get_back_a(stack_a, stack_b);
}
