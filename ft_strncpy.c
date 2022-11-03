#include "libft.h"
#include <stdio.h>

char *ft_strncpy(char * dst, const char * src, size_t len)
{
    size_t  i;

    i = 0;
    while (*dst && *src && i < len)
    {
        *dst = *src;
        dst++;
        src++;
        i++;
    }
    if (i > 0)
        *dst = 0;
    return (dst - i);
}
