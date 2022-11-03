#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
   	char s1[] = {0, 0, 48, 0};
	char s2[] = {0, 0, 48, 0};
    printf( "my function = %d \n", ft_memcmp(s1, s2, 10));
    printf( "true function = %d \n", memcmp(s1, s2, 10));

}