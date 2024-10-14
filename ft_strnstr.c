#include "libft.h"

char *ft_strnstr(const char *src, const char *search, size_t len);

char *ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t i;
	size_t j;

	if (search[0] == '\0')
		return (char *)src;

	i = 0;
	while (i < len && src[0] != '\0')
	{
		if(src[i] == search[0])
		{
			j = 0;
			while (search[j] != '\0' && src[i + j] == search[j] && (i + j) < len)
			{
				j++;
			}
			if (search[j] == '\0')
                return (char *)(src + i);
		}
		i++;
	}
	return NULL;
}

/*int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    const char *not_found = "Earth";
    
    char *result1 = ft_strnstr(haystack, needle, 13);
    if (result1) {
        printf("Encontrado: %s\n", result1); // Esperado: "World!"
    } else {
        printf("Substring não encontrada.\n");
    }

    char *result2 = ft_strnstr(haystack, not_found, 13);
    if (result2) {
        printf("Encontrado: %s\n", result2);
    } else {
        printf("Substring não encontrada.\n"); // Esperado: "Substring não encontrada."
    }

    return 0;
}*/