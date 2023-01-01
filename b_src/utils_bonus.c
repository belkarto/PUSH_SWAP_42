/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 07:29:45 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/01 07:29:47 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

int	ft_str_isnumbr(char	*str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' && str[i + 1] != 0)
		|| (str[i] == '+' && str[i + 1] != 0))
		i++;
    if (ft_strlen(str) == 0)
        return (1);
	while (str[i])
	{
		if (ft_isdigit(str[i++]) == 0)
			return (1);
	}
	return (0);
}

int	ft_check_double(char **args, int len)
{
	int	*arr;
	int	i;
	int	j;

	arr = ft_calloc(len, sizeof(int));
	i = 0;
	while (++i < len)
		arr[i - 1] = ft_atoi(args[i]);
	i = -1;
	while (++i < len - 1)
	{
		j = i + 1;
		while (j < len - 1)
		{
			if (arr[i] == arr[j++])
				return (2);
		}
	}
	free(arr);
	return (0);
}

int	ft_check_int(char **str)
{
	int		i;
	long	num;

	i = 1;
	while (str[i])
	{
		num = ft_atol(str[i]);
		if (num > 2147483647 || num < -2147483648)
			return (1);
		i++;
	}
	return (0);
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
	if (ft_check_int(args) != 0)
		return (2);
	if (ft_check_double(args, len) != 0)
		return (3);
	return (0);
}
