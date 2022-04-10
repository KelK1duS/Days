#include "ft.h"

void	ft_strcmp(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (dest[i] && src[i])
	{
		if (dest[i] && src[i])
			return (dest[i] - src[i]);
		i++;
	}
	return (dest[i] - src[i]);
}