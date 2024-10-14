#include "libft.h"

void *ft_calloc(size_t num, size_t size);

void *ft_calloc(size_t num, size_t size)
{
    void *p;
	size_t t_size;

	t_size = size * num;
    p = malloc(t_size);
    ft_memset(p, 0, t_size);
    return (p);
}


/*int main()
{
    int *arr = (int *)ft_calloc(5, sizeof(int));

    if (arr == NULL)
    {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);  // Todos os valores estarão zerados

    free(arr);
    return 0;
}*/
