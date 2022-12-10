/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:22:38 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/10 00:49:28 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_int	*fill_lst(char **av)
{
	int			i;
	t_list_int	*lst;

	i = 1;
	lst = NULL;
	while (av[i])
	{
		ft_lstadd_back_int(&lst, ft_lstnew_int(ft_atoi(av[i])));
		i++;
	}
	return (lst);
}
