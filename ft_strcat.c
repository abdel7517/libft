#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
    int i;

    i = 0;
    while (s1[i])
        i++;
    while (*s2)
    {
        s1[i++] = *s2;
        s2++;
    }
    s1[i] = 0;
    return (s1 - i);
}
