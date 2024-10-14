#include "libft.h"

int ft_toupper(int str);

int ft_toupper(int str)
{
	if(str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}

/*int main()
{
	char c = 'a';

	printf("%c", ft_toupper(c));
	return 0;
}*/