/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 12:36:21 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 16:58:18 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static char		**ft_down3(char **tmp, char **tetro, int i)
{
	int j;
	int k;

	j = 0;
	while (tetro[j] != NULL)
	{
		k = 0;
		while (tetro[j][k] != '\0')
		{
			if (tetro[j][k] == '#')
				tmp[i][k] = '#';
			k++;
		}
		j++;
		i++;
	}
	return (tmp);
}

static char		**ft_down2(char **tmp, char **tetro, int i, int j)
{
	int k;

	i = 0;
	while (tmp[i][j] != '#')
	{
		if (tmp[i][j] == '\0')
		{
			i++;
			j = 0;
		}
		j++;
	}
	j = 0;
	while (tmp[j] != NULL)
	{
		k = 0;
		while (tmp[j][k] != '\0')
		{
			tmp[j][k] = '.';
			k++;
		}
		j++;
	}
	return (ft_down3(tmp, tetro, i));
}

char			***ft_down(char ***tmp, char ***tetro, char *map, int i)
{
	int j;
	int k;

	j = 0;
	tmp[i] = ft_down2(tmp[i], tetro[i], i, j);
	j = (ft_strlen(map) - 1);
	while (j >= 0)
	{
		k = (ft_strlen(map) - 1);
		while (k >= 0)
		{
			if (tmp[i][j][k] == '#')
			{
				tmp[i][j + 1][k] = '#';
				tmp[i][j][k] = '.';
			}
			k--;
		}
		j--;
	}
	return (tmp);
}

char			***ft_right(char ***tmp, char *map, int i)
{
	int j;
	int k;

	j = (ft_strlen(map) - 1);
	while (j >= 0)
	{
		k = (ft_strlen(map) - 1);
		while (k >= 0)
		{
			if (tmp[i][j][k] == '#')
			{
				tmp[i][j][k + 1] = '#';
				tmp[i][j][k] = '.';
			}
			k--;
		}
		j--;
	}
	return (tmp);
}
