/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:54:09 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/12 21:35:24 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list_int	*stack_a;
	t_list_int	*stack_b;
	int			ret;

	ret = ft_checker(ac, av);
	if (ret != 0)
		return (ft_printf("ERROR!\n"));
	stack_a = fill_lst(av);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_ra(&stack_a);
	ft_rb(&stack_b);
	ft_rra(&stack_a);
	ft_rrb(&stack_b);
	ft_pa(&stack_a, &stack_b);
	ft_pa(&stack_a, &stack_b);
	ft_pa(&stack_a, &stack_b);
	ft_pa(&stack_a, &stack_b);
	//ft_pa(&stack_a, &stack_b);
	ft_printf("##### stack a #####\n");
	ft_printer(stack_a);
	ft_printf("#### stack b ####\n");
	ft_printer(stack_b);
	return (0);
}
 