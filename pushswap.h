#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *value;
    int size;
    int size_max;
}   stack;

void	swap_a(stack *a);
void	swap_b(stack *b);
void	swap_ss(stack *a, stack *b);
void	ft_swap(stack *stack);
int	push(stack *stack, int elem);
stack   *create_stack(int size_max);
int	pop(stack *stack);
int	peek(stack *stack);
void	push_a(stack *a, stack *b);
void	push_b(stack *a, stack *b);

#endif