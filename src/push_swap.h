/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:58:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/10 00:49:22 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../my_lib/libft.h"

t_list_int	*fill_lst(char **av);

void	ft_print_stack(t_list_int *stack_a, t_list_int *stack_b);\
void	ft_sa(t_list_int *stack);
void	ft_sb(t_list_int *stack);
void	ft_ss(t_list_int *stack_a, t_list_int *stack_b);
void	ft_pa(t_list_int **stack_a, t_list_int **stack_b);
void	ft_pb(t_list_int **stack_a, t_list_int **stack_b);
void	ft_ra(t_list_int **stack);
void	ft_rb(t_list_int **stack);
void	ft_rra(t_list_int **stack);
void	ft_rrb(t_list_int **stack);
void	ft_rr(t_list_int **stack_a, t_list_int **stack_b);
void	ft_rrr(t_list_int **stack_a, t_list_int **stack_b);
int			ft_checker(int len, char **args);
void    sort_three(t_list_int **stack);
#endif
