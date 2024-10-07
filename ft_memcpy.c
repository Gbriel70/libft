void *ft_memcpy(void *dest, const void *src, int size)
{
    int i;

    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;


    i = 0;
    while(i < size)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';

    return dest;
}
