/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 14:25:03 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/23 16:28:22 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static char		**ft_del_nl(char **dest, char *tab)
{
	int j;
	int k;
	int l;

	j = 0;
	l = 0;
	while (j < 4)
	{
		dest[j] = (char*)malloc(sizeof(char) * 5);
		k = 0;
		while (k < 4)
		{
			dest[j][k] = tab[l];
			k++;
			l++;
		}
		dest[j][k] = '\0';
		j++;
		l++;
	}
	return (dest);
}

void			ft_resplit(char **tab)
{
	int		i;
	int		n;
	char	***dest;

	n = 0;
	while (tab[n])
		n++;
	dest = (char***)malloc(sizeof(char**) * (n + 1));
	i = 0;
	while (i < n)
	{
		dest[i] = (char**)malloc(sizeof(char*) * 5);
		dest[i] = ft_del_nl(dest[i], tab[i]);
		dest[i] = ft_setupleft(dest[i]);
		i++;
	}
	dest[i] = NULL;
	ft_createmap(dest, n);
}
