void ft_bzero(void *s, int size);

void ft_bzero(void *s, int size)
{
    int i;
    unsigned char *p = s;

    i = 0;
    while (i < size)
    {
        p[i] = 0;
        i++;
    }
    return (p);
}
