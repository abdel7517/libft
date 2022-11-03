#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "";
    char search[] = "";
    printf("my return = %s \n", ft_strnstr(str, search, -3) );
    printf("true return = %s\n", strnstr(str, search, -3) );
}