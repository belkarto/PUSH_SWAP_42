/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:02:59 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/01 18:03:01 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_rb(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	if (*stack == NULL)
		return ;
	lst = *stack;
	*stack = lst->next;
	lst->next = NULL;
	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = lst;
}

void	ft_rr(t_list_int **stack_a, t_list_int **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
}

void	ft_rra(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	lst = *stack;
	if (*stack == NULL)
		return ;
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
}

void	ft_rrb(t_list_int **stack)
{
	t_list_int	*lst;
	t_list_int	*tmp;

	if (*stack == NULL)
		return ;
	lst = *stack;
	while (lst->next->next != NULL)
		lst = lst->next;
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
}

void	ft_rrr(t_list_int **stack_a, t_list_int **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}
