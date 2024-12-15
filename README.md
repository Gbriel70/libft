# 📚 42sp - Libft

<div align="center"><h1>[125 / 100]</h1></div>

<div align="center">
   <a href="https://github.com/Gbriel70/libft" target="_blank">
      <img height=170 src="https://github.com/byaliego/42-project-badges/blob/main/badges/libftm.png" hspace = "10">
   </a>
</div>

Libft é o primeiro projeto da 42 School e envolve a criação de uma biblioteca personalizada em C que implementa várias funções da biblioteca padrão.

## Como usar

- Clone o repositório:
  ```bash
  git clone https://github.com/Gbriel70/libft
  ```

- Compile a biblioteca:
  ```bash
  make
  ```

- Adicione o cabeçalho:
  ```c
  #include "libft.h"
  ```
  em seus futuros projetos.


## Funções da Libft

### Manipulação de Números
<div>
  <a href="https://github.com/Gbriel70/libft/ft_isalnum.c">
    <img src="https://img.shields.io/badge/LIBFT-ft__isalnum-skyblue?style=for-the-badge&logo=42" alt="ft_isalnum">
  </a>
  : Verifica se o caractere passado é um dígito (0-9).
</div>
- **ft_atoi**: Converte uma string para um inteiro.
- **ft_itoa**: Converte um inteiro para uma string.
- **ft_toupper**: Converte um caractere para maiúscula.
- **ft_tolower**: Converte um caractere para minúscula.

### Manipulação de Strings
- **ft_strlen**: Retorna o comprimento de uma string.
- **ft_strdup**: Duplica uma string.
- **ft_strchr**: Encontra a primeira ocorrência de um caractere em uma string.
- **ft_strrchr**: Encontra a última ocorrência de um caractere em uma string.
- **ft_strncmp**: Compara duas strings até n caracteres.
- **ft_strlcpy**: Copia uma string para um buffer, garantindo a terminação nula.
- **ft_strnstr**: Encontra uma substring dentro de outra string até um certo comprimento.
- **ft_strjoin**: Junta duas strings em uma nova string.
- **ft_substr**: Extrai uma substring de uma string.
- **ft_strtrim**: Remove caracteres de um conjunto do início e fim de uma string.
- **ft_strmapi**: Aplica uma função a cada caractere de uma string criando uma nova string.
- **ft_striteri**: Aplica uma função a cada caractere de uma string, modificando a string original.

### Manipulação de Memória
- **ft_memset**: Preenche um bloco de memória com um valor específico.
- **ft_bzero**: Zera um bloco de memória.
- **ft_strlcat**: Concatena duas strings garantindo a terminação nula.
- **ft_memcpy**: Copia um bloco de memória para outro.
- **ft_memmove**: Move um bloco de memória para outro, lidando com sobreposição.
- **ft_memchr**: Encontra um valor em um bloco de memória.
- **ft_memcmp**: Compara dois blocos de memória.
- **ft_calloc**: Aloca memória e zera a memória alocada.

### Entrada/Saída
- **ft_putchar_fd**: Escreve um caractere em um file descriptor.
- **ft_putstr_fd**: Escreve uma string em um file descriptor.
- **ft_putendl_fd**: Escreve uma string seguida de uma nova linha em um file descriptor.
- **ft_putnbr_fd**: Escreve um número inteiro em um file descriptor.

### Manipulação de Caracteres
- **ft_isalpha**: Verifica se o caractere é uma letra.
- **ft_isalnum**: Verifica se o caractere é uma letra ou dígito.
- **ft_isascii**: Verifica se o caractere é um ASCII.
- **ft_isprint**: Verifica se o caractere é imprimível.
- **ft_split**: Divide uma string em substrings com base em um delimitador.

### Funções Bonus (Lista Encadeada)
- **ft_lstnew**: Cria um novo nó de lista.
- **ft_lstadd_front**: Adiciona um novo nó no início da lista.
- **ft_lstsize**: Retorna o tamanho da lista.
- **ft_lstlast**: Retorna o último nó da lista.
- **ft_lstadd_back**: Adiciona um novo nó no final da lista.
- **ft_lstdelone**: Deleta um nó da lista.
- **ft_lstclear**: Limpa a lista inteira.
- **ft_lstiter**: Itera sobre a lista e aplica uma função a cada nó.
- **ft_lstmap**: Itera sobre a lista, aplica uma função a cada nó e cria uma nova lista com os resultados.

---
