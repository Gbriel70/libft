---

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

## Executar testes

Atualmente, os testes rodam com o Francinette.

```bash
francinette
```

## Funções da Libft

### Manipulação de Números
- [![ft_atoi](https://img.shields.io/badge/LIBFT-ft__atoi-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_atoi.c): Converte uma string para um inteiro.
- [![ft_itoa](https://img.shields.io/badge/LIBFT-ft__itoa-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_itoa.c): Converte um inteiro para uma string.
- [![ft_toupper](https://img.shields.io/badge/LIBFT-ft__toupper-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_toupper.c): Converte um caractere para maiúscula.
- [![ft_tolower](https://img.shields.io/badge/LIBFT-ft__tolower-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_tolower.c): Converte um caractere para minúscula.

### Manipulação de Strings
- [![ft_strlen](https://img.shields.io/badge/LIBFT-ft__strlen-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strlen.c): Retorna o comprimento de uma string.
- [![ft_strdup](https://img.shields.io/badge/LIBFT-ft__strdup-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strdup.c): Duplica uma string.
- [![ft_strchr](https://img.shields.io/badge/LIBFT-ft__strchr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strchr.c): Encontra a primeira ocorrência de um caractere em uma string.
- [![ft_strrchr](https://img.shields.io/badge/LIBFT-ft__strrchr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strrchr.c): Encontra a última ocorrência de um caractere em uma string.
- [![ft_strncmp](https://img.shields.io/badge/LIBFT-ft__strncmp-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strncmp.c): Compara duas strings até n caracteres.
- [![ft_strlcpy](https://img.shields.io/badge/LIBFT-ft__strlcpy-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strlcpy.c): Copia uma string para um buffer, garantindo a terminação nula.
- [![ft_strnstr](https://img.shields.io/badge/LIBFT-ft__strnstr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strnstr.c): Encontra uma substring dentro de outra string até um certo comprimento.
- [![ft_strjoin](https://img.shields.io/badge/LIBFT-ft__strjoin-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strjoin.c): Junta duas strings em uma nova string.
- [![ft_substr](https://img.shields.io/badge/LIBFT-ft__substr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_substr.c): Extrai uma substring de uma string.
- [![ft_strtrim](https://img.shields.io/badge/LIBFT-ft__strtrim-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strtrim.c): Remove caracteres de um conjunto do início e fim de uma string.
- [![ft_strmapi](https://img.shields.io/badge/LIBFT-ft__strmapi-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strmapi.c): Aplica uma função a cada caractere de uma string criando uma nova string.
- [![ft_striteri](https://img.shields.io/badge/LIBFT-ft__striteri-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_striteri.c): Aplica uma função a cada caractere de uma string, modificando a string original.

### Manipulação de Memória
- [![ft_memset](https://img.shields.io/badge/LIBFT-ft__memset-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_memset.c): Preenche um bloco de memória com um valor específico.
- [![ft_bzero](https://img.shields.io/badge/LIBFT-ft__bzero-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_bzero.c): Zera um bloco de memória.
- [![ft_strlcat](https://img.shields.io/badge/LIBFT-ft__strlcat-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_strlcat.c): Concatena duas strings garantindo a terminação nula.
- [![ft_memcpy](https://img.shields.io/badge/LIBFT-ft__memcpy-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_memcpy.c): Copia um bloco de memória para outro.
- [![ft_memmove](https://img.shields.io/badge/LIBFT-ft__memmove-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_memmove.c): Move um bloco de memória para outro, lidando com sobreposição.
- [![ft_memchr](https://img.shields.io/badge/LIBFT-ft__memchr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_memchr.c): Encontra um valor em um bloco de memória.
- [![ft_memcmp](https://img.shields.io/badge/LIBFT-ft__memcmp-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_memcmp.c):Compara dois blocos de memória.
- [![ft_calloc](https://img.shields.io/badge/LIBFT-ft__calloc-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_calloc.c):Aloca memória e zera a memória alocada.

### Entrada/Saída
- [![ft_putchar_fd](https://img.shields.io/badge/LIBFT-ft__putchar_fd-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_putchar_fd.c): Escreve um caractere em um file descriptor.
- [![ft_putstr_fd](https://img.shields.io/badge/LIBFT-ft__putstr_fd-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_putstr_fd.c): Escreve uma string em um file descriptor.
- [![ft_putendl_fd_fd](https://img.shields.io/badge/LIBFT-ft__putendl_fd-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_putendl_fd.c): Escreve uma string seguida de uma nova linha em um file.
- [![ft_putnbr_fd](https://img.shields.io/badge/LIBFT-ft__putnbr_fd-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_putnbr_fd.c): Escreve um numero inteiro em um file.

### Manipulação de Caracteres
- [![ft_isalpha](https://img.shields.io/badge/LIBFT-ft__isalpha-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_isalpha.c): Verifica se o caractere é uma letra.
- [![ft_isalnum](https://img.shields.io/badge/LIBFT-ft__isalnum-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_isalnum.c): Verifica se o caractere é uma letra ou um digito.
- [![ft_isascii](https://img.shields.io/badge/LIBFT-ft__isascii-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_isascii.c): Verifica se o caractere é um ASCII.
- [![ft_isprint](https://img.shields.io/badge/LIBFT-ft__isprint-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_isprint.c): Verifica se o caractere é imprimivel.
- [![ft_split](https://img.shields.io/badge/LIBFT-ft__split-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_split.c): Divide uma String em substrings com base em um delimitador.

### Funções Bonus (Lista Encadeada)
- [![ft_lstnew](https://img.shields.io/badge/LIBFT-ft__lstnew-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstnew.c):Cria um novo nó de lista. 
- [![ft_lstadd_front](https://img.shields.io/badge/LIBFT-ft__lstadd__front-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstadd_front.c): Adiciona um novo nó no início da lista.
- [![ft_lstsize](https://img.shields.io/badge/LIBFT-ft__lstsize-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstsize.c):Retorna o tamanho da lista.
- [![ft_lstlast](https://img.shields.io/badge/LIBFT-ft__lstlast-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstlast.c):Retorna o ultimo nó da lista.
- [![ft_lstadd_back](https://img.shields.io/badge/LIBFT-ft__lstadd__back-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstadd_back.c):Adiciona um novo nó no final da lista. 
- [![ft_lstdelone](https://img.shields.io/badge/LIBFT-ft__lstdelone-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft__lstdelone.c):Deleta um nó da lista. 
- [![ft_lstclear](https://img.shields.io/badge/LIBFT-ft__lstclear-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstclear.c):Limpa a lista inteira. 
- [![ft_lstiter](https://img.shields.io/badge/LIBFT-ft__lstiter-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstiter.c):Itera sobre a lista e aplica uma função a cada nó. 
- [![ft_lstmap](https://img.shields.io/badge/LIBFT-ft__lstmap-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/blob/main/ft_lstmap.c):Itera sobre a lista, aplica uma função a cada nó e cria uma nova lista com os resultados. 

---
