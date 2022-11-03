#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  str_len;

    str_len = ft_strlen(s);
    while (s[str_len])
    {
        if (s[str_len] == (char)c)
            return ((char *)s + str_len);
        str_len--;
    }
    return (NULL);
}
