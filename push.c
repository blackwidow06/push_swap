#include "push_swap.h"

void push_a(stack *a, stack *b)
{
    if (is_empty(b))
        return;
    push(a, peek(b));
    pop(b);
    write(1, "pa\n", 3);
}
void	push_b(stack *b, stack *a)
{
	if (is_empty(a))
		return ;
	int	tmp = peek(a);
	push(b, tmp);
	pop(a);
	write(1, "pb\n", 3);
}