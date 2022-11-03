#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
     char dst[] = "abdel";
    size_t n = 3;
    int i = 0;
    ft_memmove(dst+2, dst, n);
    printf("--- start my function --- \n");

    while (dst[i])
    {
        write(1, &dst[i], 1);
        i++;
    }
    write(1, "\n", 1);
    printf("--- start true function --- \n");
    char dst1[] = "abdel";
    i = 0;
    memmove(dst1+2, dst1, n);
    while (dst1[i])
    {
        write(1, &dst1[i], 1);
        i++;
    }
}