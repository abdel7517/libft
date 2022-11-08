#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t i;

    ptr = (void *)malloc(size * count);
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (i < count)
    {
        *(char *)ptr = 0;
        i++;
    }
    return (ptr - i);
}
