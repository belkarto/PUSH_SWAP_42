/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:04:37 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/25 05:16:05 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	move_it(t_pos pos, t_list_int **sta_a, t_list_int **sta_b)
{
	while (pos.pos_a != 0 || pos.pos_b != 0)
	{
		if (pos.pos_a > 0 && pos.pos_b > 0)
		{
			ft_rr(sta_a, sta_b);
			pos.pos_a--;
			pos.pos_b--;
		}
		else if (pos.pos_a < 0 && pos.pos_b < 0)
		{
			ft_rrr(sta_a, sta_b);
			pos.pos_a++;
			pos.pos_b++;
		}
		else if (pos.pos_a < 0 && pos.pos_b == 0)
		{
			ft_rra(sta_a);
			pos.pos_a++;
		}
		else if (pos.pos_a > 0 && pos.pos_b == 0)
		{
			ft_ra(sta_a);
			pos.pos_a--;
		}
		else if (pos.pos_a == 0 && pos.pos_b < 0)
		{
			ft_rrb(sta_b);
			pos.pos_b++;
		}
		else if (pos.pos_a == 0 && pos.pos_b > 0)
		{
			if (pos.pos_b == 1)
				ft_sb(*sta_b);
			else
				ft_rb(sta_b);
			pos.pos_b--;
		}
		else if (pos.pos_a > 0 && pos.pos_b < 0)
		{
			ft_ra(sta_a);
			ft_rrb(sta_b);
			pos.pos_a--;
			pos.pos_b++;
		}
		else if (pos.pos_a < 0 && pos.pos_b > 0)
		{
			ft_rra(sta_a);
			ft_rb(sta_b);
			pos.pos_a++;
			pos.pos_b--;
		}
	}
	ft_pa(sta_a, sta_b);
}
