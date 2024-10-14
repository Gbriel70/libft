#include "libft.h"

int ft_strncmp(const char *src, char *dest, size_t n);

int ft_strncmp(const char *src, char *dest, size_t n)
{
	size_t i;

	if (n <= 0)
		return (0);
	
	i = 0;
	while(i < n && (src[i] != '\0' || dest[i] != '\0'))
	{
		if (src[i] != dest[i])
			return ((unsigned char)src[i] - (unsigned char)dest[i]);
		i++;
	}
	return(0);
}

/*int main()
{
	char str[] = "teste";
	char dest[] = "teste";
	size_t n = 2;

	printf("%d", ft_strncmp(str, dest, n));
}*/