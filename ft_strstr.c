#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i;
    size_t o;
    size_t needle_len;
    size_t haystack_len;

    i = 0;
    needle_len = ft_strlen(needle);
    haystack_len = ft_strlen(haystack);
    if (haystack_len == 0 && needle_len == 0)
        return ( (char *) haystack);
    while (haystack[i])
    {
        o = 0;
        while (needle[o] && needle[o] == haystack[i])
        { 
            o++;
            i++;
            if(o == needle_len)
                return ( (char *)haystack+(i - o));
        }
        i = i - o;
		i++;
    }
    return (NULL);
}

