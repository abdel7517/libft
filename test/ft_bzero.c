#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    void *s;
    size_t n = 3;
    int i = 0;
    ft_bzero(s, n);
    printf("--- start my function --- \n");
    while (i < n)
    {
        int t = * (char *) s + 48;
        printf("%d \n", t);
        s++;
        i++;
    }
    printf("--- start true function --- \n");
    i = 0;
    s = s - i;
    bzero(s, 3);
    while (i < n)
    {
        int t = * (char *) s + 48;
        printf("%d \n", t);
        s++;
        i++;
    }
}