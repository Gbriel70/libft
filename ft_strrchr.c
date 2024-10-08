#include "libft.h"

char *ft_strrchr(const char *str, int c);

char *ft_strrchr(const char *str, int c)
{
	const char *last = NULL;

	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (c == '\0')
		return (char *)str;
	
	return (char *)last;
}

int main()
{
	char str[] = "aoaoaoa ooaao";
	char c = 'o';

	printf("%s", ft_strrchr(str, c));
	return 0;
}