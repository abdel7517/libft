#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char dst[20] = "abdel";
    char src[] = "karim";
    ft_strncat(dst, src, 50);
    int i = 0;
    while (dst[i])
        printf("%c", dst[i++]);
}