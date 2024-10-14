#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t size);

void *ft_memcpy(void *dest, const void *src, size_t size)
{

    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    while(size--)
    {
        *d++ = *s++;
    }

    return dest;
}
/*int main()
{
  char source[] = "Hello, World!";
    char destination[20];

    ft_memcpy(destination, source, '\0');
    printf("Copia de char: %s\n", destination);

    int srcInts[] = {1, 2, 3, 4, 5};
    int destInts[5];

    ft_memcpy(destInts, srcInts, 0); 
    printf("Copia de int: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", destInts[i]);
    }
    printf("\n");

    return 0;
}*/