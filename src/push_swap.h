/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:58:19 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/23 20:49:10 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../my_lib/libft.h"

typedef struct s_pos
{
	int	*arr_a;
	int	*arr_b;
	int	len_a;
	int	len_b;
	int	pos_a;
	int	pos_b;
	int	moves;
}				t_pos;

typedef struct s_lis
{
	int	i;
	int	j;
	int	*lis;
	int	*length;
	int	*sub_seq;
}				t_lis;

t_list_int	*fill_lst(char **av);
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
int			ft_checker(int len, char **args);
void		sort_three(t_list_int **stack);
void		five_args(t_list_int **stack_a, t_list_int **stack_b);
void		sort_stack(t_list_int **stack_a, t_list_int **stack_b);
void		push_down(t_list_int ***stack, int rep);
void		push_up(t_list_int ***stack, int rep);
int			get_index(t_list_int *stack, int num);
void		get_the_smallest(t_list_int ***stack);
int			*ft_get_arr(t_list_int *list, int len);
void		longest_incresing_subseq(t_list_int **stack_a,
				t_list_int **stack_b);
void		get_back_a(t_list_int **stack_a, t_list_int **stack_b);
void		mov_count_fir(t_pos **pos, int ind, int i);
void		mov_count_last(t_pos **pos, int ind, int j);
void		max_pos(t_pos **pos, int ind);
void	move_it(t_pos pos, t_list_int **sta_a, t_list_int **sta_b);
void	ft_check_top(t_pos **pos, int b);
#endif
