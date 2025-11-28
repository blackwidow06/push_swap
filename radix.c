#include "push_swap.c"

void	ft_index(stack *a)
{
	int	*sort; // valeurs de a trier //
	int	i;
	int	j;

	sort = copy_stack(a);
	sort_stack(sort, a->size);
	i = 0;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->value[i] == sort[j])
			{
				a->value[i] = j; // valeur = index//
				return ;
			}
		}
		j++;
	}
	i++;
}

void	radix_sort(stack a, stack b)
{
	int	index_max = a->size - 1;
	int	max_bits = 0;
	int	bit = 0;
	int	size;
	int	i;
	int	nbr;

	while ((max >> max_bits) != 0)
    max_bits++;
    while (bit < max_bits)
    {
        size = a->size;
        i = 0;
        while (i < size)
        {
            num = a->value[0];
            if (((num >> bit) & 1) == 0)
                pb(a, b);
            else
                ra(a);
            i++;
        }
        while (b->size > 0)
            pa(a, b);
        bit++;
    }
}
void	push_swap(stack a, stack b)
{
	if (is_sorted(a))
		return ;
	ft_index(a);
	radix_sort(a, b);
}