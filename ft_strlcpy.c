#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size);

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return(ft_strlen(src));
	
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return(ft_strlen(dest));
}

int main()
{
	char src[] = "teste";
	char dest[] = "";
	size_t size = 3;

	printf("%zu", ft_strlcpy(dest, src, size));
	return 0;
}