#include "push_swap.h"

stack	*create_stack(int size_max)
{
	if (size_max <= 0)
		return (NULL);
	stack *s = malloc(sizeof(*s));
	if (!s)
		return (NULL);
	s->value = malloc(sizeof(int) * size_max);
	if (!s->value)
	{
		free(s);
		return (NULL);
	}
	s->size = 0;
	return (s);
}
int	is_empty(stack *stack)
{
	if (stack->size == 0)
		return (1);
	return (0);
}
int	push(stack *stack, int elem) //push
{
	stack->value[stack->size] = elem;
	stack->size++;
	return (1);
}
int	pop(stack *stack)
{
	if (is_empty(stack))
		return (0);
	stack->value[stack->size - 1] = 0;
	stack->size--;
	return (1);
}
int	peek(stack *stack)
{
	if (is_empty(stack))
		return (0);
	int elem = stack->value[stack->size - 1];
	return (elem);
}
