#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char *s1 = "42";
    char *s2 = "";
    char *str  = ft_strjoin(s1, s2);
    printf("return = -%s-", str );
}