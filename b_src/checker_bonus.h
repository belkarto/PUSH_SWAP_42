/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 06:14:33 by belkarto          #+#    #+#             */
/*   Updated: 2023/01/01 07:30:50 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../my_lib/libft.h"

int			ft_str_isnumbr(char	*str);
int			ft_check_double(char **args, int len);
int			ft_check_int(char **str);
int			ft_checker(int len, char **args);
int			ft_is_sorted(t_list_int *stack_a, t_list_int *stack_b);
char		**get_rules(void);
void		ft_print_stack(t_list_int *stack_a, t_list_int *stack_b);
void		ft_sa(t_list_int *stack);
void		ft_sb(t_list_int *stack);
void		ft_ss(t_list_int *stack_a, t_list_int *stack_b);
void		ft_pa(t_list_int **stack_a, t_list_int **stack_b);
void		ft_pb(t_list_int **stack_a, t_list_int **stack_b);
void		ft_ra(t_list_int **stack);
void		ft_rb(t_list_int **stack);
void		ft_rra(t_list_int **stack);
void		ft_rrb(t_list_int **stack);
void		ft_rr(t_list_int **stack_a, t_list_int **stack_b);
void		ft_rrr(t_list_int **stack_a, t_list_int **stack_b);
void		move_it(t_list_int **sta_a, t_list_int **sta_b, char **str);
t_list_int	*fill_lst(char **av);

#endif
