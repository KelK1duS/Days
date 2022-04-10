#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	unsigned int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int word_size(char *str, char *charset)
{
	unsigned int	i;

	i = 0;
	while (!is_charset(str[i], charset))
		i++;
	return (i);
}

int	nb_word(char *str, char *charset)
{
	unsigned int	i;
	int				nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (!is_charset(str[i], charset) && str[i])
			i++;
		if (is_charset(str[i], charset) && str[i])
		{
			nb++;
			while (is_charset(str[i], charset) && str[i])
				i++;
		}
	}
	return (nb);
}

char	*ft_strdup(char *str, unsigned int size)
{
	char			*cpy;
	unsigned int	i;

	cpy = malloc(sizeof(char *) * (size + 1));
	if (!cpy)
		return (cpy);
	i = 0;
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	**ft_split(char *str, char* charset)
{
	char			**tab;
	unsigned int	i;
	unsigned int	cur;
	unsigned int	size;

	tab = malloc(sizeof(char *) * (nb_word(str, charset) + 1));
	if (!tab)
		return (tab);
	i = 0;
	cur = 0;
	while (str[i])
	{
		size = word_size(&str[i], charset);
		while (!size && str[i])
		{
			size = word_size(&str[i], charset);
			i++;
		}
		if (str[i])
		{

			tab[cur] = ft_strdup(&str[i], size);
			if (!tab[cur])
				return(tab);
			cur++;
			i += size;
		}
		i++;
	}
	tab[cur] = (char *)0;
	return (tab);
}

/*#include <stdio.h>

int main(void)
{
    char			**tab;
	unsigned int	i;

	tab = ft_split("Hello|World My Name is/KelK1", "|/ ");
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
