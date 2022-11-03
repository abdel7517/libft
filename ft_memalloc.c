#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    if (ptr == NULL)
        return (NULL);
    return (ptr);
}