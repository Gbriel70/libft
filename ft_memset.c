
void    *ft_memset(void *ptr, int value, int num);

void    *ft_memset(void *ptr, int value, int num)
{
	int i;
	unsigned char *p = ptr;
	unsigned char val = (unsigned char)value;

	i = 0;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return ptr;
}
