#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nb;

    nb = 0;
    i = 0;
    sign = 1;
    while ( (str[i] >= 9 && str[i] <= 13) || str[i] == 32 )
    {
        i++;
    }
    if (str[i] == '+' || str[i] ==  '-')
    {
        if (str[i] ==  '-')
            sign *= -1;
            i++;
    }
    while (str[i] >= '0'  && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48); 
        i++;
    }
    return (nb * sign);
}