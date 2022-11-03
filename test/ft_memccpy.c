#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char dst[] = "abdel";
    char src[] = "bertran";
    size_t n = 5;
    int i = 0;
    int c = 101;
    ft_memccpy(dst, src, c, n);
    printf("--- start my function --- \n");

    while (dst[i])
    {
        printf("%c", dst[i]);
        i++;
    }
    printf("\n--- start true function --- \n");
    char dst1[] = "abdel";
    char src1[] = "bertran";
    i = 0;
    memccpy(dst1, src1,c, n);
    while (dst1[i])
    {
        printf("%c", dst1[i]);
        i++;
    }
}