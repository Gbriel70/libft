#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *));

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

#include <ctype.h>
void to_uppercase(unsigned int i, char *c)
{
    if (*c)
        *c = (char)toupper(*c);  // Converte o caractere para maiúsculo
}

int main()
{
    char str[] = "bola";
    ft_striteri(str, to_uppercase);
    printf("%s\n", str);  // Saída: 42 CADETE
    return 0;
}