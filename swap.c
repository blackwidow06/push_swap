#include "push_swap.h"

void	ft_swap(stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->value[stack->size-2];
	stack->value[stack->size-2] = stack->value[stack->size-1];
	stack->value[stack->size-1] = tmp;
}
void	swap_a(stack *a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}
void swap_b(stack *b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}
void	swap_ss(stack *a, stack *b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}