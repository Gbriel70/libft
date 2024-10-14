#include "libft.h"

int ft_atoi(const char *str);

int ft_atoi(const char *str)
{
	int i;
	int res;
	int sing;

	sing = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}

	return (res * sing);
}

int main() {
    char str1[] = "  --123";
    char str2[] = "42abc";
    char str3[] = "   +56";

    printf("%d\n", ft_atoi(str1));  // Saída: -123
    printf("%d\n", ft_atoi(str2));  // Saída: 42
    printf("%d\n", ft_atoi(str3));  // Saída: 56

    return 0;
}