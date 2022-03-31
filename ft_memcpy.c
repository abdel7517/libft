#include "libft.h"
#include <stdio.h>


void *ft_memcpy(void *dest, const void *src, size_t n){
    size_t i = 0;
    while (i < n )
    {
        printf("s =  %s\n", (char *)dest-i);

        dest = &src;
        dest ++;
        src++;
        i++;
    }
    return dest;
}