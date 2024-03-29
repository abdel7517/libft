#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;

    i = 0;
    j = 0;
    if (s1 == NULL)
        return ((char *)s2);
    if (s2 == NULL)
        return ( (char *) s1);
    str = (char *)malloc( sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (str == NULL)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = 0;
    return (str);
}