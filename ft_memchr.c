#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    if (!s)
		return (NULL);
    while (n > 0 && *(unsigned char*)s != (unsigned char) c && *(unsigned char*)s)
    {
        s++;
        n--;
    }
    if (*(unsigned char*)s == 0 || n == 0)
    	return (NULL);
    return  ((void*)s); 
}