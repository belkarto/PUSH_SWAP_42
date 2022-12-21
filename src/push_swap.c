/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:54:09 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/20 17:43:32 by belkarto         ###   ########.fr       */
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
	stack_b = NULL;
	sort_stack(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
	return (0);
}
 
