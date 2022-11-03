#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char s[] = "abdel";
    int c = 110;
    size_t n = 5;
    printf("my function : %s \n", (unsigned char *)(ft_memchr(s,c,n)));
    printf("true function : %s", (unsigned char *)(memchr(s,c,n)));

}