/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 21:57:22 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/01 21:58:05 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_move(t_list_int **sta_a, t_list_int **sta_b, char *s)
{
	if (ft_strncmp(s, "pa", ft_strlen(s) - 1) == 0)
		ft_pa(sta_a, sta_b);
	else if (ft_strncmp(s, "pb", ft_strlen(s) - 1) == 0)
		ft_pb(sta_a, sta_b);
	else if (ft_strncmp(s, "rr", ft_strlen(s) - 1) == 0)
		ft_rr(sta_a, sta_b);
	else if (ft_strncmp(s, "rrr", ft_strlen(s) - 1) == 0)
		ft_rrr(sta_a, sta_b);
	else if (ft_strncmp(s, "rra", ft_strlen(s) - 1) == 0)
		ft_rra(sta_a);
	else if (ft_strncmp(s, "rrb", ft_strlen(s) - 1) == 0)
		ft_rrb(sta_b);
	else if (ft_strncmp(s, "ra", ft_strlen(s) - 1) == 0)
		ft_ra(sta_a);
	else if (ft_strncmp(s, "rb", ft_strlen(s) - 1) == 0)
		ft_rb(sta_b);
	else if (ft_strncmp(s, "sa", ft_strlen(s) - 1) == 0)
		ft_sa(*sta_a);
	else if (ft_strncmp(s, "sb", ft_strlen(s) - 1) == 0)
		ft_sb(*sta_b);
	else if (ft_strncmp(s, "ss", ft_strlen(s) - 1) == 0)
		ft_ss(*sta_a, *sta_b);
	else
		return (1);
	return (0);
}

void	get_rules(t_list_int **sta_a, t_list_int **sta_b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(1);
		if (ft_move(sta_a, sta_b, str) == 1
			|| ft_strncmp(str, "\n", ft_strlen(str)) == 0)
		{
			free(str);
			break ;
		}
		free (str);
	}
}

int	ft_is_sorted(t_list_int *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}
