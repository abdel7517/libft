#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    printf("my f = %d \n", ft_strncmp("TripouilleX", "Tripouille", 42));
    printf("true f = %d \n", strncmp("TripouilleX", "Tripouille", 42));
}


