/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemendes <cemendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:44:08 by cemendes          #+#    #+#             */
/*   Updated: 2021/12/12 19:44:14 by cemendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	int				j;
	size_t			i;

	j = (int) n;
	i = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (j == 0)
		return (0);
	while ((a1[i] == a2[i]) && (i + 1 < n))
		i++;
	if (i % 2 == 0)
		return (a1[i] - a2[i]);
	else
		return (256 * (a1[i] - a2[i]));
}
