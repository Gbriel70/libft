#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2);

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str_concat;
	size_t concat_size;
	size_t x;

	concat_size = ft_strlen(s1) + ft_strlen(s2);

	str_concat = malloc (concat_size + 1);

	if (!str_concat)
		return NULL;
	
	x = 0;
	while (*s1)
	{
		str_concat[x++] = *s1++;
	}
	while (*s2)
	{
		str_concat[x++] = *s2++;
	}
	str_concat[x] = '\0';
	return(str_concat); 
}

/*int main()
{
	char s1[] = "teste";
	char s2[] = "funcionou";

	printf("%s", ft_strjoin(s1, s2));
	return 0;
}*/