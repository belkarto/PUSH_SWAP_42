/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:47:34 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/10 01:32:46 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_isnumbr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i++]) == 0)
			return (1);
	}
	return (0);
}

int	ft_check_double(char **args)
{
}
int	ft_checker(int len, char **args)
{
	int	i;

	i = 1;
	while (args[i])
	{
		if (ft_str_isnumbr(args[i]) == 1)
			return (1);
		i++;
	}
	ft_check_double(args);
	return (0);
}
