/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemendes <cemendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 07:43:46 by cemendes          #+#    #+#             */
/*   Updated: 2021/12/14 07:43:54 by cemendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;

	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	ft_memset(d, 0, nmemb * size);
	return (d);
}
