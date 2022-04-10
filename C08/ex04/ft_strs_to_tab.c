#include "ft_strs_to_tab.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	ft_fill_obj(char *str)
{
	struct s_stock_str	obj;
	unsigned int		i;

	obj.size = ft_strlen(str);
	obj.str = str;	
	obj.copy = malloc(sizeof(char) * obj.size);
	while (!obj.copy)
		return (obj);
	i = 0;
	while (str[i])
	{
		obj.copy[i] = obj.str[i];
		i++;
	}
	return (obj);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*obj;
	int					i;

	obj = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!obj)
		return ((struct s_stock_str	*)0);
	i = 0;
	while (i < ac)
	{
		obj[i] = ft_fill_obj(av[i]);
		if (!obj[i].copy)
		{
			while (i > 0)
			{
				free(obj[i - 1].copy);
				i--;
			}
			return (free(obj), (struct s_stock_str *)0);
		}
		
		i++;
	}
	obj[i].str = 0;
	return (obj);
}

int	main(int argc, char **argv)
{
	struct s_stock_str	*obj;
	int	i;

	obj = ft_strs_to_tab(argc, argv);
	i = 0;
	while (obj[i].str)
	{
		printf("%s\n%i\n%s\n\n", obj[i].str, obj[i].size, obj[i].copy);
		i++;
	}
	return (0);
}