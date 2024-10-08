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
int ft_toupper(int str);
int ft_tolower(char c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *src, char *dest, size_t n);
void *ft_memchr(const void *s, int value, size_t n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

#endif