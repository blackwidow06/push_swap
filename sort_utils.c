
#include "push_swap.h"

void fill_stack(stack *a, char **split)
{
	int i;

	i = 0;
	while (split[i])
	{
		a->value[a->size] = ft_atoi(split[i]);
		a->size++;
		i++;
	}
}
int is_sorted(stack *a)
{
	int i = 0;

	while (i < a->size - 1)
	{
		if (a->value[i] > a->value[i + 1])
			return (0);
		i++;
	}
	return (1);
}
// copie pour trier sans toucher a la pile d'origine
int *copy_stack(stack *a)
{
	int *copy;
	int i;

	i = 0;
	copy = malloc(sizeof(int) * a->size);
	while (i < a->size)
	{
		copy[i] = a->value[i];
		i++;
	}
	return (copy);
}
// trier du plus petit au plus grand
void sort_stack(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
