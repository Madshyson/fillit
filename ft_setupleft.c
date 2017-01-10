/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setupleft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:30:24 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/22 16:20:22 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static char		**ft_up(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == '#')
			{
				tab[i - 1][j] = '#';
				tab[i][j] = '.';
			}
			j++;
		}
		i++;
	}
	return (tab);
}

static char		**ft_left(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == '#')
			{
				tab[i][j - 1] = '#';
				tab[i][j] = '.';
			}
			j++;
		}
		i++;
	}
	return (tab);
}

static char		**ft_setup(char **tab)
{
	int i;
	int j;
	int istop;

	i = 0;
	j = 0;
	istop = 0;
	while (!istop)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == '#')
				istop = 1;
			j++;
		}
		if (!istop)
			tab = ft_up(tab);
	}
	return (tab);
}

static char		**ft_setleft(char **tab)
{
	int i;
	int j;
	int isleft;

	i = 0;
	j = 0;
	isleft = 0;
	while (!isleft)
	{
		i = 0;
		while (tab[i] != NULL)
		{
			if (tab[i][j] == '#')
				isleft = 1;
			i++;
		}
		if (!isleft)
			tab = ft_left(tab);
	}
	return (tab);
}

char			**ft_setupleft(char **tab)
{
	tab = ft_setup(tab);
	tab = ft_setleft(tab);
	return (tab);
}
