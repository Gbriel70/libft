#include "libft.h"

char *ft_strdup(const char *str);

char *ft_strdup(const char *str)
{
    char *dup;
    int len;
    int i;

    len = ft_strlen(str);
    dup = malloc(len + 1);
    i = 0;    
    while (i < len)
    {
        dup[i] = str[i];
        i++;
    }
	dup[i] = '\0';

    return dup;
}

/*int main()
{
    char str[] = "aaaaa";

    printf("%s", ft_strdup(str));

    return 0;
}*/