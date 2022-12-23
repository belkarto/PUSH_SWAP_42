/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 08:55:11 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/23 15:51:54 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_down(t_list_int ***stack, int rep)
{
	int	i;

	i = 0;
	while (i < rep)
	{
		ft_rra(*stack);
		i++;
	}
}

void	push_up(t_list_int ***stack, int rep)
{
	int	i;

	i = 0;
	while (i < rep)
	{
		ft_ra(*stack);
		i++;
	}
}

int	get_index(t_list_int *stack, int num)
{
	int			i;
	t_list_int	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		if (tmp->content == num)
			break ;
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	get_the_smallest(t_list_int ***stack)
{
	t_list_int	*lst;
	int			num;

	lst = **stack;
	num = lst->content;
	while (lst)
	{
		if (lst->content < num)
			num = lst->content;
		lst = lst->next;
	}
	num = get_index(**stack, num);
	if (num == 0)
		return ;
	else if (num > ft_lstsize_int(**stack) / 2)
		push_down(stack, ft_lstsize_int(**stack) - num);
	else
		push_up(stack, num);
}
