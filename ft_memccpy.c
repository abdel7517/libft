#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    if (n == 0)
        return (dst);
    while (n > 0 && *(char *)(src-1) != (unsigned char)c)
    {
        *(char *)dst = *(char *)src;
        dst++;
        src++;
        n--;
    }
    return (dst);
}