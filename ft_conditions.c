/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:42:42 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 17:41:13 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static int		ft_firstisok(int j, char *str)
{
	j++;
	while (str[j] != '\0')
	{
		if (str[j] == '#')
		{
			if (str[j - 1] != '#' && str[j - 5] != '#')
			{
				if (str[j + 1] != '#')
					return (0);
				else
				{
					if (str[j - 4] != '#')
						return (0);
				}
			}
		}
		j++;
	}
	return (j);
}

static int		ft_checkform(char **tab, int i, int j)
{
	while (tab[++i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == '#')
			{
				if (tab[i][j + 3] == '#' && tab[i][j + 4] == '#' &&
						tab[i][j + 5] == '#')
					return (1);
				if (tab[i][j + 1] == '#' || tab[i][j + 5] == '#')
				{
					j = ft_firstisok(j, tab[i]);
					if (j == 0)
						return (0);
				}
				else
					return (0);
			}
			else
				j++;
		}
	}
	return (1);
}

static int		ft_nblocs(char *str)
{
	int i;
	int blocs;

	i = 0;
	blocs = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			blocs++;
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
		{
			if (blocs != 4)
				return (0);
			blocs = 0;
		}
		i++;
	}
	return (1);
}

static int		ft_long(char *str, int i, int c, int n)
{
	while (str[++i] != '\0')
	{
		if (str[i] == '\n')
		{
			if (c != 4)
				return (0);
			if (str[i + 1] == '\n')
			{
				if ((i + 1) != n)
					return (0);
				n = n + 21;
				i++;
			}
			if (str[i + 1] == '\0')
			{
				if ((i + 1) != n)
					return (0);
			}
			c = 0;
		}
		if (str[i] == '.' || str[i] == '#')
			c++;
	}
	return (1);
}

int				ft_conditions(char *str)
{
	int		i;
	char	**tab;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		i++;
	}
	if (str[i - 1] != '\n')
		return (0);
	if (ft_long(str, -1, 0, 20) == 0)
		return (0);
	if (ft_nblocs(str) == 0)
		return (0);
	tab = ft_split(str);
	if (ft_checkform(tab, -1, 0) == 0)
		return (0);
	return (1);
}
