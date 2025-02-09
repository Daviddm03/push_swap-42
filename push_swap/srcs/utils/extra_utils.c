#include "../../include/push_swap.h"

long int    ft_atoi(const char *str)
{
    long int    res;
    int         sign;
    int         i;

    res = 0;
    sign = 1;
    i = 0;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (ft_is_digit(str[i]))
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write (1, &str[i++], 1);
}

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	exit (1);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

int	get_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
