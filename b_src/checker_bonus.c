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
	char		**str;

	if (ac > 1)
	{
		ret = ft_checker(ac, av);
		if (ret != 0)
			return (ft_printf("ERROR!\n"));
		stack_a = fill_lst(av);
		stack_b = NULL;
		str = get_rules();
		move_it(&stack_a, &stack_b, str);
		if (ft_is_sorted(stack_a, stack_b) == 1)
			ft_printf("ko\n");
		else
			ft_printf("ok\n");
		ft_lstclear_int(&stack_a);
		ft_lstclear_int(&stack_b);
	}
	return (0);
}
