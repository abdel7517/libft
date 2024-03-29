#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
        {
            return (s1[i]-s2[i]);
        }
        i++;
    }
	if (s1[i] == 0 && s2[i] != 0)
		return (-1);
	if (s2[i] == 0 && s1[i] != 0)
		return (1);
    return (0);
}
