#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == 0)
		return (ft_strlen(s) + (char *)s);
    while (s[i])
    {
        if(s[i] == (char) c)
           return ( (char *) s+i);
        i++;
    }
    return (NULL);
}
