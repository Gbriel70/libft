#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return (char *)str;
		str++;
	}

	if (c == '\0')
	{
		return (char *)str;
	}

	return(0);
}

int main()
{
	char str[] = "bola";
	char c  = 'a';

	printf("%s", ft_strchr(str, c));

	return 0;
}