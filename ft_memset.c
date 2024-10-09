
#include "libft.h"

void    *ft_memset(void *ptr, int value, size_t num);

void    *ft_memset(void *ptr, int value, size_t num)
{
	size_t i;
	unsigned char *p = (unsigned char *)ptr;
	unsigned char val = (unsigned char)value;

	i = 0;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return ptr;
}
/*int main()
{
	char src[10];
	int i = 0;
	size_t n = 3;

	printf("%zu", ft_memset(src, i, n));

	return 0;
}*/