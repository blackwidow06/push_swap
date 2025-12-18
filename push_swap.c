#include "push_swap.h"

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
				break;
			}
			j++;
		}
		i++;
	}
	free(sort);
}
void	radix_sort(stack *a, stack *b)
{
	int	size;
	int	i;
	int	num;

	if (a->size < 2)
		return ;
	int max_num = a->size - 1;
	int max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	int bit = 0;
	while (bit < max_bits)
	{
		size = a->size;
		i = 0;
		while (i < size)
		{
			num = peek(a);
			if (((num >> bit) & 1) == 0)
				push_b(b, a);
			else
				rotate_a(a);
			i++;
		}
		while (!is_empty(b))
			push_a(a, b);
		bit++;
	}
}
void	index_to_values(stack *a, int *sorted)
{
	int	i = 0;
	while (i < a->size)
	{
		a->value[i] = sorted[a->value[i]];
		i++;
	}
}
void	push_swap(stack *a, stack *b)
{
	int	*sorted;
	int	i;

	if (is_sorted(a))
		return ;
	sorted = copy_stack(a);       // copie originale
	sort_stack(sorted, a->size);  // tri les valeurs originales
	ft_index(a);                  // transforme en indices
	if (a->size == 2)
		sort_2(a);
	else if (a->size == 3)
		sort_3(a);
	else if (a->size > 5)
		radix_sort(a, b);             // trie les indices
	index_to_values(a, sorted);   // remet les valeurs originales triées
	i = 0;
	while (i < a->size)
	{
		a->value[i] = sorted[i];
		i++;
	}
	free(sorted);
}
