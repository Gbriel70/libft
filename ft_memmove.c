#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t size);

void *ft_memmove(void *dest, void *src, size_t size)
{
    unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	if (d < s)
	{
		while(size--)
		{
			*d++ = *s++;
		}
	}else 
	{
		d += size;
		s += size;
		while(size--)
		{
			*(--d) = *(--s);
		}
	}

	return (dest);
}

/*int main()
{
  char source[] = "Hello, World!";
    char destination[20];

    ft_memmove(destination, source, 13);
    printf("Copia de char: %s\n", destination);

    int srcInts[] = {1, 2, 3, 4, 5};
    int destInts[5];

    ft_memmove(destInts, srcInts, sizeof(srcInts)); 
    printf("Copia de int: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", destInts[i]);
    }
    printf("\n");

    return 0;
}*/