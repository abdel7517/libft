#include "libft.h"
#include <unistd.h>

void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

int main()
{
    char s[] = "abdel";
    char dest[] = "lucas";
    size_t n = 3;
    ft_memcpy(dest, s, n);
}