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
[![ft_isalnum](https://img.shields.io/badge/LIBFT-ft__isalnum-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_isalnum.c)
- [![ft_atoi](https://img.shields.io/badge/LIBFT-ft__atoi-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_atoi.c): Converte uma string para um inteiro.
- [![ft_itoa](https://img.shields.io/badge/LIBFT-ft__itoa-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_itoa.c): Converte um inteiro para uma string.
- [![ft_toupper](https://img.shields.io/badge/LIBFT-ft__toupper-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_toupper.c): Converte um caractere para maiúscula.
- [![ft_tolower](https://img.shields.io/badge/LIBFT-ft__tolower-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_tolower.c): Converte um caractere para minúscula.

### Manipulação de Strings
- [![ft_strlen](https://img.shields.io/badge/LIBFT-ft__strlen-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strlen.c): Retorna o comprimento de uma string.
- [![ft_strdup](https://img.shields.io/badge/LIBFT-ft__strdup-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strdup.c): Duplica uma string.
- [![ft_strchr](https://img.shields.io/badge/LIBFT-ft__strchr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strchr.c): Encontra a primeira ocorrência de um caractere em uma string.
- [![ft_strrchr](https://img.shields.io/badge/LIBFT-ft__strrchr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strrchr.c): Encontra a última ocorrência de um caractere em uma string.
- [![ft_strncmp](https://img.shields.io/badge/LIBFT-ft__strncmp-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strncmp.c): Compara duas strings até n caracteres.
- [![ft_strlcpy](https://img.shields.io/badge/LIBFT-ft__strlcpy-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strlcpy.c): Copia uma string para um buffer, garantindo a terminação nula.
- [![ft_strnstr](https://img.shields.io/badge/LIBFT-ft__strnstr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strnstr.c): Encontra uma substring dentro de outra string até um certo comprimento.
- [![ft_strjoin](https://img.shields.io/badge/LIBFT-ft__strjoin-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strjoin.c): Junta duas strings em uma nova string.
- [![ft_substr](https://img.shields.io/badge/LIBFT-ft__substr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_substr.c): Extrai uma substring de uma string.
- [![ft_strtrim](https://img.shields.io/badge/LIBFT-ft__strtrim-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strtrim.c): Remove caracteres de um conjunto do início e fim de uma string.
- [![ft_strmapi](https://img.shields.io/badge/LIBFT-ft__strmapi-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strmapi.c): Aplica uma função a cada caractere de uma string criando uma nova string.
- [![ft_striteri](https://img.shields.io/badge/LIBFT-ft__striteri-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_striteri.c): Aplica uma função a cada caractere de uma string, modificando a string original.

### Manipulação de Memória
- [![ft_memset](https://img.shields.io/badge/LIBFT-ft__memset-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_memset.c): Preenche um bloco de memória com um valor específico.
- [![ft_bzero](https://img.shields.io/badge/LIBFT-ft__bzero-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_bzero.c): Zera um bloco de memória.
- [![ft_strlcat](https://img.shields.io/badge/LIBFT-ft__strlcat-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_strlcat.c): Concatena duas strings garantindo a terminação nula.
- [![ft_memcpy](https://img.shields.io/badge/LIBFT-ft__memcpy-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_memcpy.c): Copia um bloco de memória para outro.
- [![ft_memmove](https://img.shields.io/badge/LIBFT-ft__memmove-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_memmove.c): Move um bloco de memória para outro, lidando com sobreposição.
- [![ft_memchr](https://img.shields.io/badge/LIBFT-ft__memchr-skyblue?style=for-the-badge&logo=42)](https://github.com/Gbriel70/libft/ft_memchr.c): Encontra um valor em um bloco de memória.
- [![ft_memcmp](https://img.shields.io/badge/LIBFT-ft__memcmp-skyblue?style=for-the-badge&logo=42)](https://github


