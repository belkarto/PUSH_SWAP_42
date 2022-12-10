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
void		ft_swap(t_list_int *stack, char c);
void		ft_push(t_list_int **stack_a, t_list_int **stack_b);
void		ft_printer(t_list_int *lst);
void		ft_rotate(t_list_int **stack);
void		ft_rev_rotate(t_list_int **stack);
int			ft_checker(int len, char **args);
#endif
