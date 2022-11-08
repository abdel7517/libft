#include "libft.h"
#include <stdio.h>

static void ft_count(int *n, int *nbCpy, int *len, int *s)
{
     if (*nbCpy < 0)
    {
        *nbCpy = *nbCpy * -1;
        *n = *n * -1;
        *len = *len+1;
        *s = *s*-1;
    }
}

static void ft_z(int *nbCpy, int *len)
{
     while (*nbCpy > 0)
    {
        *nbCpy = *nbCpy / 10;
        *len = *len+1;
    }
}

char *ft_itoa(int n)
{
    int nbCpy;
    int len;
    char *str;
    int s;

    s = -1;
    nbCpy = n;
    len = 0;
    ft_count(&n, &nbCpy, &len, &s);
    ft_z(&nbCpy, &len);
    str = (char *)malloc(sizeof(char)*(len+1));
    if (str == NULL)
        return (NULL);
    str[len-1] = 0;
    while (n)
    {
        str[len-1] = (n % 10) + 48; 
        n = n / 10;
        len--;
    }
    if (s > 0)
        str[0] = '-';
    return (str);
}