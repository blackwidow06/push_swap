#include "push_swap.h"

void	rotate(stack *s)
{
	int tmp;
	int i;

	if (s->size < 2)
		return ;
	tmp = s->value[s->size - 1];
	i = s->size - 1;
	while (i > 0)
	{
		s->value[i] = s->value[i - 1];
		i--;
	}
	s->value[0] = tmp;
}

void	rotate_a(stack *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(stack *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rotate_rr(stack *a, stack *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}