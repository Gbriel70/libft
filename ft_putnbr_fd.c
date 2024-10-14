#include "libft.h"

void ft_putnbr_fd(int n, int fd);

void ft_putnbr_fd(int n, int fd)
{
    unsigned int nb;

    if (nb <  0)
    {
        ft_putchar_fd('-', fd);
        nb = (unsigned int)(nb * -1);
    }
    else
        nb = (unsigned int)nb;
    if (nb >= 10)
        ft_putchar_fd(nb / 10, fd);
    ft_putchar_fd((char)(nb % 10 + '0'), fd);        
}