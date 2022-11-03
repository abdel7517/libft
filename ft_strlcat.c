#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  dst_len;

	if (dst == NULL || src == NULL)
		return (ft_strlen(dst) + ft_strlen(src));
    if (dstsize == 0)
        return (ft_strlen(src));
    dst_len = ft_strlen(dst);
    i = 0;
    if(dstsize > 0)
    {
        if ( dstsize < dst_len )
            return (dstsize + ft_strlen(src));
        while ((dst_len+i) < (dstsize-1) && *src )
        {
            dst[dst_len+i] = *src;
            i++;
            src++;
        }
        if(i > 0)
            dst[dst_len+i] = 0;
    }
    return (ft_strlen(dst) + ft_strlen(src));

}
