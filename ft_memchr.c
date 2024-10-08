#include "libft.h"

void *ft_memchr(const void *s, int value, size_t n);

void *ft_memchr(const void *s, int value, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)value)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    int data[] = {0x12345678, 0x9ABCDEF0, 0xCAFEBABE};
    unsigned char *found = memchr(data, 0xBE, sizeof(data));

    if (found != NULL)
        printf("O byte '0xBE' foi encontrado na posição: %ld\n", found - (unsigned char *)data);
    else
        printf("O byte não foi encontrado.\n");

    return 0;
}

