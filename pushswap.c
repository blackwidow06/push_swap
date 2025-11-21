#include "pushswap.h"

stack   *create_stack(int size_max)
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
	//write(1, "sa\n", 3);
}

void	swap_ss(stack *a, stack *b)
{
	swap_a(a);
	swap_a(b);
	//write(1, "ss\n", 3);
}
void	push_a(stack *a, stack *b)
{
	if (is_empty(b))
		return ;
	int	tmp = peek(b);
	push(a, tmp);
	pop(b);
}
void	push_b(stack *b, stack *a)
{
	if (is_empty(a))
		return ;
	int	tmp = peek(a);
	push(b, tmp);
	pop(a);
}
