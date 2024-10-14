#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *resp;
    size_t size;
    size_t i;

    if (!s || !f)
        return NULL;
    size = ft_strlen(s);
    resp = malloc(size + 1);
    if (!resp)
        return NULL;
    i = 0;
    while (i < size)
    {
        resp[i] = f(i , s[i]);
        i++;
    }
    resp[i] = '\0';
    return(resp);
}

/*#include <ctype.h>
char to_uppercase(unsigned int i, char c)
{
    return (char)toupper(c);  // Converte para maiúscula
}

int main()
{
    char *result = ft_strmapi("bola", to_uppercase);
    printf("%s\n", result);  // Saída: 42SP
    free(result);  // Não se esqueça de liberar a memória!
    return 0;
}*/