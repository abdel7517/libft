#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char dst[] = "abdel";
    char src[] = "lucas";
    ft_strncpy(dst, src, 10);
    int i =0;
    while (dst[i] != 0)
    {
        printf("%c", dst[i]);
        i++;;
    }
    // printf("--- start true function --- \n");
    // unsigned char* r = memset(b, c, len);
    // while (*r != 0)
    // {
    //     unsigned char t = *r + 48;
    //     printf("%c \n", t);
    //     r++;
    // }
}