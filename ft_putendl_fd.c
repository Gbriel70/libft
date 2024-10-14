#include "libft.h"

void ft_putendl_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
{
    if (s != NULL)
    {
        ft_putstr_fd(s, fd);
        ft_putchar_fd('\n', fd);
    }
}