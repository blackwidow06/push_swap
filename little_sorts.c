#include "push_swap.h"

void	sort_2(stack *stack)
{
	if (stack->value[0] > stack->value[1])
		swap_a(stack);
}

void	sort_3(stack *stack)
{
	int a;
	int b;	
	int c;

	a = stack->value[0];
	b = stack->value[1];
	c = stack->value[2];
	if (a > b && b < c && a < c)
		swap_a(stack);
	else if (a > b && b > c)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (a > b && b < c && a > c)
		rotate_a(stack);
	else if (a < b && b > c && a < c)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else if (a < b && b > c && a > c)
		reverse_rotate_a(stack);
}

