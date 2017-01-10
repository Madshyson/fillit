/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:39:17 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/23 12:55:41 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static int		ft_words(char *str)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && str[i - 1] == '\n')
		{
			n++;
		}
		i++;
	}
	return (n);
}

static char		**ft_endsplit(char **tab, char *str, int words)
{
	int i;
	int j;
	int k;
	int n;

	i = 0;
	j = 0;
	n = 20;
	while (j < words)
	{
		k = 0;
		tab[j] = (char*)malloc(sizeof(char) * 17);
		while (i < n)
		{
			tab[j][k] = str[i];
			k++;
			i++;
		}
		n = n + 21;
		i++;
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char			**ft_split(char *str)
{
	int		words;
	char	**tab;

	words = ft_words(str);
	tab = (char**)malloc(sizeof(char*) * (words + 1));
	if (!tab)
		return (NULL);
	return (ft_endsplit(tab, str, words));
}
