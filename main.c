
#include "pushswap.h"

int main(void)
{
    stack *a = create_stack(4);
    stack *b = create_stack(4);

    push(a, 1);
    push(a, 2);
    push(a, 3);
	push(a, 4);

    push(b, 1);
	push(b, 2);
	push(b, 3);

	push_b(b, a);
	int	i = 0;
	int capacity = a->size_max;
	while(i < capacity)
	{
		printf("%d %d\n", a->value[i], b->value[i]);
		i++;
	}
	return (0);
}