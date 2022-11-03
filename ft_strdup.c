#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t size;
    char *str;

    size = ft_strlen(s1);
    str = (char *) malloc(sizeof(char) * (size + 1));
    while (*s1)
    {
        *str = *s1;
        s1++;
        str++;
    }
    *str = 0;
    return (str - size);
}
