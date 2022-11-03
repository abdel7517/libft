#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char dst[30]; memset(dst, 0, 30);
	char *src = (char *)"AAAAAAAAA";
    memset(dst, 'B', 10);    
    printf( "return my function = %lu \n" , ft_strlcat(dst, src, 5));

    int i = 0;
    while (dst[i])
        printf("%c", dst[i++]);

    printf("\n");
    char dst1[30]; memset(dst1, 0, 30);
	char *src1 = (char *)"AAAAAAAAA";
    memset(dst1, 'B', 10);
    printf( "return true function = %lu \n" ,strlcat(dst1, src1, 5));
    i = 0;
    while (dst1[i])
        printf("%c", dst1[i++]);
    printf("\n");
}