/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:24:40 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/07 16:43:55 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(const char *str, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i] != '\0')
				i++;
			n++;
		}
		while (str[i] == c)
			i++;
	}
	return (n);
}

char		**ft_strsplit(const char *str, char c)
{
	unsigned int	i;
	int				j;
	int				words;
	size_t			len;
	char			**dest;

	i = 0;
	j = 0;
	words = ft_words(str, c);
	dest = (char**)malloc(sizeof(char*) * (words + 1));
	if (!dest)
		return (NULL);
	while (j < words)
	{
		len = 0;
		while (str[i] == c)
			i++;
		while (str[i + len] != c && str[i + len] != '\0')
			len++;
		dest[j] = ft_strsub(str, i, len);
		j++;
		i = i + len;
	}
	dest[j] = NULL;
	return (dest);
}
