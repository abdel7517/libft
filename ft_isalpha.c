#include "libft.h"

 int ft_isalpha(int c)
 {
    if ( ((unsigned char)c >= 65 && (unsigned char)c <= 90) || ((unsigned char)c >= 97 && (unsigned char)c <= 122))
        return (1);
    return (0);
 }