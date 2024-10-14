#include "libft.h"

char **ft_split(char const *s, char c);

static size_t get_wordsnum(const char *s, char c)
{
    int is_word;
    size_t words;

    words = 0;
    is_word = 0;
    while (*s)
    {
        if (!is_word && *s != c) // Início de uma nova palavra.
        {
            is_word = 1;
            words++; // Conta uma nova palavra.
        }
        else if (is_word && *s == c) // Fim da palavra.
            is_word = 0;
        s++; // Avança na string.
    }
    return (words); // Retorna o total de palavras encontradas.
}



static size_t get_wordlen(const char *s, char c)
{
    size_t offset;

    offset = 0;
    while (s[offset] && s[offset] != c) // Conta até encontrar o delimitador.
        offset++;
    return (offset); // Retorna o comprimento da palavra.
}



static char *worddup(const char *s, size_t len)
{
    char *str;
    size_t offset;

    str = malloc(len + 1); // Aloca espaço para a string + '\0'.
    if (str == NULL)
        return (NULL);
    offset = 0;
    while (offset < len) // Copia os caracteres da palavra.
    {
        str[offset] = s[offset];
        offset++;
    }
    str[offset] = '\0'; // Adiciona o caractere nulo no final.
    return (str);
}



static void *kill(char **res, size_t stop)
{
    size_t counter;

    counter = 0;
    while (counter < stop) // Libera todas as strings alocadas.
        free(res[counter++]);
    free(res); // Libera o array principal.
    return (NULL);
}



char **ft_split(const char *s, char c)
{
    char **res;
    size_t len;
    size_t words;
    size_t counter;

    if (s == NULL) // Verifica se a string é nula.
        return (NULL);
    words = get_wordsnum(s, c); // Conta o número de palavras.
    res = malloc((words + 1) * sizeof(char *)); // Aloca espaço para o array de strings.
    if (res == NULL) // Verifica se a alocação falhou.
        return (NULL);
    counter = 0;
    while (counter < words) // Para cada palavra encontrada:
    {
        len = get_wordlen(s, c); // Obtém o comprimento da próxima palavra.
        if (len) // Se a palavra não for vazia:
        {
            res[counter] = worddup(s, len); // Duplica a palavra.
            if (res[counter++] == NULL) // Verifica erro de alocação.
                return (kill(res, counter - 1)); // Libera memória em caso de erro.
        }
        s += len + 1; // Avança para a próxima palavra.
    }
    res[counter] = NULL; // Marca o fim do array com NULL.
    return (res);
}
