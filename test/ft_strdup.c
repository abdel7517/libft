#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    const char *str = "abdel";
    char *rft = ft_strdup(str);
    while (*rft != 0)
    {
        printf("%c", *rft);
        rft++;
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