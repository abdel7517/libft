
#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
typedef unsigned long size_t;
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
#endif