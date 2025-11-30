#include "push_swap.h"

int	is_number(char **str)
{
	int i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!(str[i][j] >='0' && str[i][j] <= '9') &&
				!(str[i][j] == '-' && j == 0))
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}
long long	ft_atoi(const char *str)
{
	int			i;
	long long	sign;
	long long	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
    	nbr *= 10;
    	nbr += str[i] - '0';
    	i++;
	}
	return (nbr * sign);
}
int 	ft_duplicate(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (ft_atoi(tab[i]) == ft_atoi(tab[j]) && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
char	**parse_string(int ac, char *av[])
{
	char	**split;
	char	*join;
	char	*tmp;
	int		i;

	i = 1;
	join = ft_strjoin("", av[i]);
	while (i++ < ac - 1)
	{
		tmp = ft_strjoin(join, av[i]);
		free(join);
		join = tmp;
	}
	split = ft_split(join, ' ');
	free(join);
	if (!split)
		return (NULL);
	if (!is_number(split) || !ft_duplicate(split))
	{
		free_split(split);
		return (NULL);
	}
	return (split);
}