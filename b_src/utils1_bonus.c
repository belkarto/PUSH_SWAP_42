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

void	ft_move(t_list_int **sta_a, t_list_int **sta_b, char *s)
{
	if (ft_strncmp(s, "pa", ft_strlen(s)) == 0)
		ft_pa(sta_a, sta_b);
	else if (ft_strncmp(s, "pb", ft_strlen(s)) == 0)
		ft_pb(sta_a, sta_b);
	else if (ft_strncmp(s, "rr", ft_strlen(s)) == 0)
		ft_rr(sta_a, sta_b);
	else if (ft_strncmp(s, "rrr", ft_strlen(s)) == 0)
		ft_rrr(sta_a, sta_b);
	else if (ft_strncmp(s, "rra", ft_strlen(s)) == 0)
		ft_rra(sta_a);
	else if (ft_strncmp(s, "rrb", ft_strlen(s)) == 0)
		ft_rrb(sta_b);
	else if (ft_strncmp(s, "ra", ft_strlen(s)) == 0)
		ft_ra(sta_a);
	else if (ft_strncmp(s, "rb", ft_strlen(s)) == 0)
		ft_rb(sta_b);
	else if (ft_strncmp(s, "sa", ft_strlen(s)) == 0)
		ft_sa(*sta_a);
	else if (ft_strncmp(s, "sb", ft_strlen(s)) == 0)
		ft_sb(*sta_b);
	else if (ft_strncmp(s, "ss", ft_strlen(s)) == 0)
		ft_ss(*sta_a, *sta_b);
}

char	**get_rules(void)
{
	char	*s;
	char	*str;
	char	**str1;

	str = NULL;
	while (1)
	{
		s = get_next_line(1);
		if (ft_strncmp(s, "\n", 1) == 0)
		{
			free (s);
			break ;
		}
		str = ft_strjoin_gnl(str, s);
		free(s);
	}
	str1 = ft_split(str, '\n');
	free(str);
	return (str1);
}

void	move_it(t_list_int **sta_a, t_list_int **sta_b, char **str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		ft_move(sta_a, sta_b, str[i]);
		free(str[i]);
	}
	free(str);
}

int	ft_is_sorted(t_list_int *stack_a, t_list_int *stack_b)
{
	int	len;

	len = ft_lstsize_int(stack_b);
	if (len != 0)
		return (1);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
