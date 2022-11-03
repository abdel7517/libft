#include "libft.h"

 void *ft_memmove(void *dst, const void *src, size_t len)
 {
    int i;

    i = (int) len-1;
    if(src < dst)
    {
       while (i >= 0)
       {
            *(char *)(dst+i) = *(char *)(src+i);
            i--;
       }
    }
    else
    {
        ft_memcpy(dst, src, len);
    }
    return (dst);
 }