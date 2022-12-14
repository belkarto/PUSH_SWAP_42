/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:35:12 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/14 01:35:19 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_list_int **stack)
{
    t_list_int  *lst;

    lst = *stack;
    if (lst->content > lst->next->content && lst->content < lst->next->next->content)
        return (ft_sa(*stack));
    else if (lst->content > lst->next->content && lst->next->next->content < lst->next->content)
    {
        ft_sa(*stack);
        ft_rra(stack);
    }
    else if (lst->content > lst->next->content && lst->next->next->content > lst->next->content)
        return (ft_ra(stack));
    else if (lst->content < lst->next->content && lst->next->next->content < lst->next->content
                && lst->content < lst->next->next->content)
    {
        ft_sa(*stack);
        ft_ra(stack);
    }
    else if (lst->content < lst->next->content && lst->next->next->content < lst->next->content)
        ft_rra(stack);
}