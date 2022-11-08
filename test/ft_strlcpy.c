#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[] = "coucou";
	char dst[10]; 
    memset(dst, 'A', 10);
    printf("my f = %zu apres = -%c-\n", ft_strlcpy(dst, src, 2), dst[2]);
    char src1[] = "coucou";
	char dst1[10]; 
    memset(dst1, 'A', 10);
    printf("true f = %zu apres = -%c-\n", strlcpy(dst1, src1, 2), dst1[2]);

}