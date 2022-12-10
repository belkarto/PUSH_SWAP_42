/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:54:09 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/10 06:14:52 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list_int	*stack_a;

	ft_printf("%d\n", ac);
	if (ft_checker(ac, av) != 0)
		return (ft_printf("ERROR!\n"));
	stack_a = fill_lst(av);
	ft_printer(stack_a);
	return (0);
}
