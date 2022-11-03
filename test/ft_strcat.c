#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char dst[20] = "abdel";
    char src[] = "karim";
    ft_strcat(dst, src);
    int i = 0;
    while (dst[i])
        printf("%c", dst[i++]);
}