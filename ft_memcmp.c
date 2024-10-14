#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t i;
	unsigned char *p1 = (unsigned char *)ptr1;
	unsigned char *p2 = (unsigned char *)ptr2;

	i = 0; 
	while (i < num)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello, World!";
    char str3[] = "Hellp";

    // Comparando str1 e str2
    int result1 = ft_memcmp(str1, str2, 5); // Até o tamanho de str1
    printf("Comparando str1 e str2: %d\n", result1); // Esperado: 0

    // Comparando str1 e str3
    int result2 = ft_memcmp(str1, str3, 5);
    printf("Comparando str1 e str3: %d\n", result2); // Esperado: < 0

    // Comparando str1 e str3 com a diferença
    int result3 = ft_memcmp(str1, str3, 4);
    printf("Comparando str1 e str3 até 4 bytes: %d\n", result3); // Esperado: 0

    return 0;
}*/
