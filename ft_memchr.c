/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemendes <cemendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:43:48 by cemendes          #+#    #+#             */
/*   Updated: 2021/12/12 19:43:53 by cemendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*r;
	unsigned char	i;

	r = (unsigned char *)s;
	i = (unsigned char)c;
	while (n >= 1)
	{
		if (*r == i)
			return (r);
		r++;
		n--;
	}	
	return (NULL);
}
