#include "ft_strs_to_tab.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	n;

	n = nb % 10 + '0';
	if (nb > 10)
		ft_putnbr(nb / 10);
	write(1, &n , 1);
}

void	ft_show_tab(struct s_stock_str	*par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}

int	main(int argc, char **argv)
{
	struct s_stock_str	*obj;

	obj = ft_strs_to_tab(argc, argv);
	ft_show_tab(obj);
	return (0);
}