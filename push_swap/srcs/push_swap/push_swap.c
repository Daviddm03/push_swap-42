#include "../../include/push_swap.h"

int	ft_is_sorted(t_stack *stack)
{
    while (stack->next != NULL)
    {
        if (stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return (1);
}

static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
    if (stack_size == 2 && !ft_is_sorted(*stack_a))
        do_sa(stack_a);
    else if (stack_size == 3)
        small_sort(stack_a);
    else if (stack_size > 3 && !ft_is_sorted(*stack_a))
        big_sort(stack_a, stack_b);
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int     stack_size;

    if (ac < 2)
        return (0);
    if (!ft_is_correct_input(av))
        exit_error(NULL, NULL);
    stack_b = NULL;
    stack_a = fill_stack_values(ac, av);
    stack_size = get_stack_size(stack_a);
    assign_index(stack_a, stack_size + 1);
    if (stack_size <= 9)
    {
        free_stack(&stack_a);
            return (0);
    }
    push_swap(&stack_a, &stack_b, stack_size);
    free_stack(&stack_a);
    free_stack(&stack_b);
    return (0);
}
