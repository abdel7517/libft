/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemendes <cemendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:26:44 by cemendes          #+#    #+#             */
/*   Updated: 2021/12/18 12:26:53 by cemendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_s_strlen(char const *s, char c)
{
	size_t	strlen;

	strlen = 0;
	while (s[strlen] != c && s[strlen])
		strlen++;
	return (strlen);
}

static size_t	ft_strnb(char const *s, char c)
{
	int		i;
	size_t	strnb;

	i = 0;
	strnb = 0;
	while (s[i])
	{	
		if (s[i] == c)
			i++;
		else
		{
			strnb++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
	return (strnb);
}

static char	*ft_str_cpy(char const *s, size_t strlen)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (strlen + 1));
	if (str == NULL)
		return (NULL);
	while (i < strlen)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_clear(char **tab, size_t j)
{
	while (--j <= 0)
		free(tab[j]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	strlen;
	char	**tab;
	int		j;

	if (s == NULL)
		return (NULL);
	j = -1;
	tab = (char **)malloc(sizeof(char *) * (ft_strnb(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			strlen = ft_s_strlen(s, c);
			tab[++j] = ft_str_cpy(s, strlen);
			if (tab[j] == NULL)
				return (ft_clear(tab, j));
			s = s + strlen;
		}
	}
	tab[++j] = NULL;
	return (tab);
}
