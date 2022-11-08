#include "libft.h"


size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  dst_len;

	if (dst == NULL || src == NULL)
		return (ft_strlen(dst) + ft_strlen(src));
    if (dstsize == 0)
        return (ft_strlen(src));
    dst_len = ft_strlen(dst);
    i = 0;
    if(dstsize >= 0)
    {
        while (i < (dstsize-1) && dst[i] )
        {
            dst[i] = *src;
            i++;
            src++;
        }
        dst[i] = 0;
    }
    return (ft_strlen(src-i));
}
