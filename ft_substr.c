#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;
	size_t size_s;

	size_s = ft_strlen(s);

	if (start >= size_s)
		return ft_strdup("");

	
	if (len > size_s - start)
		len = size_s - start;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return NULL;

	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return(substr);
}

/*int main()
{
    char str[] = "Hello, World!";
    char *sub;

    sub = ft_substr(str, 7, 5);  // Extraí "World"
    if (sub)
    {
        printf("Substring: %s\n", sub);
        free(sub);  // Libera a memória alocada
    }
    else
    {
        printf("Erro de alocação de memória\n");
    }

    return 0;
}*/
