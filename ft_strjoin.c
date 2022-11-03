#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    if (s1 == NULL)
        return ((char *)s2);
    if (s2 == NULL)
        return ( (char *) s1);
    str = (char *)malloc( sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (str == NULL)
        return (NULL);
    ft_strcat(str, s1);
    ft_strcat(str, s2);
    return (str);
}