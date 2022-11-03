#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t length)
{
    size_t i;

    i = 0;
	if (length == 0)
		return (0);
    while (s1[i] && s2[i] && i < length)
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
