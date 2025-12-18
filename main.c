
#include "push_swap.h"

//int main(void)
//{
//    stack *a = create_stack(4);
//    stack *b = create_stack(4);

//    push(a, 1);
//    push(a, 2);
//    push(a, 3);
//	push(a, 4);

//    push(b, 1);
//	push(b, 2);
//	push(b, 3);

//	push_a(a, b);
//	int	i = 0;
//	int capacity = a->size_max;
//	while(i < capacity)
//	{
//		printf("%d %d\n", a->value[i], b->value[i]);
//		i++;
//	}
//	return (0);
//}

//int main(void)
//{
//    stack *a = create_stack(4);
//    stack *b = create_stack(4);

//    push(a, 1);
//    push(a, 2);
//    push(a, 3);
//    push(a, 4);

//    push(b, 1);
//    push(b, 2);
//    push(b, 3);

//    rotate_rr(a, b);

//    int i = 0;
//    int capacity = a->size;

//    while (i < capacity)
//    {
//        printf("%d %d\n", a->value[i], b->value[i]);
//        i++;
//    }
//    return 0;
//}

//int	main(void)
//{
//	int		stack[1000];
//	int		size;

//	char	*input = "+44  "-78 5" 65444";
//	size = parse_string(input, stack);
//	for (int i = 0; i < size; i++)
//		printf("stack[%d] = %d\n", i, stack[i]);
//	return (0);
//}

//int     main(int ac, char **av)
//{
//    int i = 1;
//    char *str = "";
//    stack a_stack;

//    if (ac < 2)
//        return (0);
//    while (i < ac)
//    {
//        str = ft_strjoin(str, av[i]);
//        i++;
//    }
//    parse_string(str, &a_stack);
//    return (0);
//}

//int main(int ac, char **av)
//{
//    stack a;
//    stack b;
//    char **split;

//    if (ac < 2)
//        return (0);

//    split = parse_string(ac, av);
//    if (!split)
//        return (write(2, "Error\n", 6), 1);

//    a.value = malloc(sizeof(int) * (ac * 2)); 
//    a.size = 0;
//    b.value = malloc(sizeof(int) * (ac * 2)); 
//    b.size = 0;

//    fill_stack(&a, split);
//    free_split(split);

//    push_swap(&a, &b);

//    return (0);
//}

int main(int ac, char **av)
{
    stack a;
    stack b;
    char **split;
    //int i;

    if (ac < 2)
        return (0);
    split = parse_string(ac, av);
    if (!split)
        return (0);
    a.value = malloc(sizeof(int) * 100);
    b.value = malloc(sizeof(int) * 100);
    a.size = 0;
    b.size = 0;
    fill_stack(&a, split);
    free_split(split);
    //i = 0;
    //while (i < a.size)
    //{
    //    printf("%d ", a.value[i]);
    //    i++;
    //}
    //printf("\n");
    push_swap(&a, &b);
    //i = 0;
    //while (i < a.size)
    //{
    //    printf("%d ", a.value[i]);
    //    i++;
    //}
    //printf("\n");
    free(a.value);
    free(b.value);
    return (0);
}
