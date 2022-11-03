#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char*   ptr;

    if(b == NULL)
        return (b);
    i = 0;
    ptr = (unsigned char *) b;
    while (i < len)
    {
        *(ptr + i) = (unsigned char) c;
        i++;
    }
    *(ptr + i) = 0;
    return (b);
}
