/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 06:40:00 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/01 07:21:32 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"


int	main(int ac, char **av)
{
	t_list_int	*stack_a;
	t_list_int	*stack_b;
	int			ret;

	ret = ft_checker(ac, av);
	if (ret != 0)
		return (ft_printf("ERROR!\n"));
	stack_a = fill_lst(av);
	stack_b = NULL;
    ft_is_sorted(stack_a);
    ft_print_stack(stack_a, stack_b);
	ft_lstclear_int(&stack_a);
	return (0);
}
