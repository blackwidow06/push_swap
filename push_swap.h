#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int *value;
	int size;
	int size_max;
}   stack;

stack   *create_stack(int size_max);
int is_empty(stack *stack);
int push(stack *stack, int elem);
int pop(stack *stack);
int peek(stack *stack);

void    ft_swap(stack *stack);
void    swap_a(stack *a);
void    swap_b(stack *b);
void    swap_ss(stack *a, stack *b);

void    push_a(stack *a, stack *b);
void    push_b(stack *b, stack *a);

void    rotate(stack *s);
void    rotate_a(stack *a);
void    rotate_b(stack *b);
void    rotate_rr(stack *a, stack *b);

void    reverse_rotate(stack *s);
void    reverse_rotate_a(stack *a);
void    reverse_rotate_b(stack *b);
void    reverse_rotate_rr(stack *a, stack *b);

char	**ft_split(char const *s, char c);
void	free_split(char **tab);
char	*ft_strjoin(char const *s1, char const *s2);
char	**parse_string(int ac, char *av[]);
long long	ft_atoi(const char *str);
int	check_int(const char *str);

void	move_min(stack *stack);

void	sort_2(stack *stack);
void	sort_3(stack *stack);

int     *copy_stack(stack *a);
void    sort_stack(int *tab, int size);
int     is_sorted(stack *a);
void fill_stack(stack *a, char **split);

void	push_swap(stack *a, stack *b);
void	index_to_values(stack *a, int *sorted);
void	ft_index(stack *a);

#endif
