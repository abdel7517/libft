#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    void* b;
    int c = 6;
    size_t len = 6;
    unsigned char* rft = ft_memset(b, c, len);
    printf("--- start my function --- \n");
    while (*rft != 0)
    {
        unsigned char t = *rft + 48;
        printf("%c \n", t);
        rft++;
    }
    printf("--- start true function --- \n");
    unsigned char* r = memset(b, c, len);
    while (*r != 0)
    {
        unsigned char t = *r + 48;
        printf("%c \n", t);
        r++;
    }
}