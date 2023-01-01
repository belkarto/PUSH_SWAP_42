#include "checker_bonus.h"

int ft_is_sorted(t_list_int *stack)
{
    while (stack->next)
    {
        if (stack->content > stack->next->content)
            return (1);
        stack = stack->next;
    }
    return (0);
}
