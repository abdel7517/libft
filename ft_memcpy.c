  #include "libft.h"

  void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
  {
    if (n == 0)
        return (dst);
    while (n > 0)
    {
        *(char *)dst = *(char *)src;
        dst++;
        src++;
        n--;
    }
    return (dst);
  }