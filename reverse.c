#include "push_swap.h"

void	reverse_rotate(stack *s)
{
	int tmp;
	int i;

	if (s->size < 2)
		return;
	tmp = s->value[0];
	i = 0;
	while (i < s->size - 1)
	{
		s->value[i] = s->value[i + 1];
		i++;
	}
	s->value[s->size - 1] = tmp;
}
void	reverse_rotate_a(stack *a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(stack *b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	reverse_rotate_rr(stack *a, stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
