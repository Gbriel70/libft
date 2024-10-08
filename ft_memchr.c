#include "libft.h"

void *ft_memchr(const void *s, int value, size_t n);

void *ft_memchr(const void *s, int value, size_t n)
{
	unsigned char val = (unsigned char)value;
	size_t i;

	if(n == NULL)
		return 0;
	
	i = 0;
	while (i < n && s[i] != '\0')
	{
		
	}
}

