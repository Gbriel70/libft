#include "libft.h"
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size);

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	size_t i;
	size_t j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = dest_len;
	i = 0;
	if (dest_len < size-1 && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_len >= size)
		dest_len = size;

	return (dest_len + src_len);
}

/*int main(void)
{
    char dest[20] = "Hello";   // Buffer de destino
    const char *src = " World"; // String de origem
    size_t size = 9;           // Tamanho máximo do buffer de destino
    size_t result;

    // Exibindo os valores antes da concatenação
    printf("Antes da concatenação:\n");
    printf("dest: '%s'\n", dest);
    printf("src: '%s'\n", src);
    printf("Tamanho do buffer (size): %zu\n", size);

    // Chama a função ft_strlcat
    result = ft_strlcat(dest, src, size);

    // Exibindo os valores após a concatenação
    printf("\nDepois da concatenação:\n");
    printf("dest: '%s'\n", dest);
    printf("Valor retornado: %zu\n", result);


    return 0;
}*/