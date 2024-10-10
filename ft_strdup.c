#include "libft.h"

char *ft_strdup(const char *str);

char *ft_strdup(const char *str)
{
    char *dup;
    int len;
    int i;

    len = ft_strlen(str);
    dup = (char *)malloc(len + 1);
    i = 0;    
    while (str[i] != '\0')
    {
        dup[i] = str[i];
        i++;
    }

    return (char *)dup;
}

/*int main()
{
    char str[] = "aaaaa";

    printf("%s", ft_strdup(str));

    return 0;
}*/