#include "libft.h"

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i])
        i++;
    while (*s2 && n > 0)
    {
        s1[i++] = *s2;
        s2++;
        n--;
    }
    s1[i] = 0;
    return (s1 - i);
}
