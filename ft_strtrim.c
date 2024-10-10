#include "libft.h"

char *ft_strtrim(char const *s1, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	size_t x;

	if (*s1 && *set == '\0')
		return NULL;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	x = ft_strlen(s1);
	while (x && ft_strchr(set, s1[x]))
	x--;
	return (ft_substr(s1, 0 , x + 1 ));
}

int main()
{
	char s;
	char set;
	printf("%s", ft_strtrim(&s, &set));
	printf("%d", strtrim(&s, &set));
	return 0;
}