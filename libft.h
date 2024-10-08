#ifndef LIBFT_H

#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int d);
int ft_isalnum(int c);
int ft_isascii(int a);
int ft_isprint(int a);
int ft_strlen(const char *c);
void *ft_memset(void *ptr, int value, size_t num);
void ft_bzero(void *s, int size);
void *ft_memcpy(void *dest, const void *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);

#endif