/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemendes <cemendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:26:44 by cemendes          #+#    #+#             */
/*   Updated: 2022/03/02 19:12:47 by cemendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*str_cpy;
	size_t			len;

	if (!s || !f)
		return (NULL);
	counter = 0;
	len = ft_len(s) + 1;
	str_cpy = (char *) malloc(sizeof(char) * len);
	if (!str_cpy)
		return (NULL);
	while (s[counter])
	{
		str_cpy[counter] = f(counter, s[counter]);
		counter++;
	}
	str_cpy[counter] = '\0';
	return (str_cpy);
}
