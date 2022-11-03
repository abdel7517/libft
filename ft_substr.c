#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (((size_t)start + len) > ft_strlen(s))
	{
		if (start <= ft_strlen(s))
		{
			free(str);
			str = (char *)malloc(sizeof(char) * (1 + ft_strlen(s) - start ));
		}
		else
		{
			free(str);
			str = (char *)malloc(sizeof(char) * 1);
			return (str);
		}
	}
    if (str == NULL || s == NULL)
        return (NULL);
    while (s[start] && i < len && i < ft_strlen(s))
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = 0;
    return (str);
}