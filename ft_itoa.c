#include "libft.h"

char *ft_itoa(int n);

static size_t get_width(int n)
{
    size_t width;

    width = ( n <= 0);
    while (n)
    {
        n /= 10;
        width++;
    }
    return (width);
}

static char *revstr(char *str)
{
    size_t i;
    size_t len;
    char temp;

    if (!str || !*str)
        return (str);
    len = ft_strlen(str);
    i = 0;
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len -1 -i];
        str[len -1 -i] = temp;
        i++;
    }
    return(str);
}

char *ft_itoa(int n)
{
    char *num;
    int rest;
    size_t i;
    const char neg = (n < 0);
    const size_t width = get_width(n);

    if (n == INT_MIN)
        return (ft_strdup("-2147483648"));
    num = ft_calloc(width + 1 ,sizeof(char));
    if (!num)
        return (NULL);
    if (neg)
        n = -n;
    i = 0;
    while (i < width)
    {
        rest = n % 10;
        n = n / 10;
        num[i] = '0' + rest;
        i++;
    }
    if (neg)
        num[i - 1] = '-';
    return (revstr(num));
}

int main()
{
    int n = 1234;
    char *res = ft_itoa(n);
    printf("%s", res);
    free(res);
    return 0;
}