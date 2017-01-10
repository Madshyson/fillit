/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:29:57 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 16:59:28 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static char		**ft_tmp_to_map(char **map, char ***tmp, int i)
{
	int j;
	int k;

	j = 0;
	while (map[j] != NULL)
	{
		k = 0;
		while (map[j][k] != '\0')
		{
			if (tmp[i][j][k] == '#')
				map[j][k] = ('A' + i);
			k++;
		}
		j++;
	}
	return (map);
}

static int		ft_tmpmodif(char ***tetro, char **map, char ***tmp, int i)
{
	size_t j;
	size_t k;

	j = 0;
	k = 0;
	while (j < ft_strlen(map[0]))
	{
		if (tmp[i][j][ft_strlen(map[0]) - 1] == '#')
			k = 1;
		j++;
	}
	if (k == 0)
	{
		tmp = ft_right(tmp, map[0], i);
		return (ft_checkmap(tetro, map, tmp, i));
	}
	k = 0;
	while (k < ft_strlen(map[0]))
	{
		if (tmp[i][ft_strlen(map[0]) - 1][k] == '#')
			return (0);
		k++;
	}
	tmp = ft_down(tmp, tetro, map[0], i);
	return (ft_checkmap(tetro, map, tmp, i));
}

static char		**ft_repointmap(char **map, int i)
{
	int j;
	int k;

	j = 0;
	while (map[j] != NULL)
	{
		k = 0;
		while (map[j][k] != '\0')
		{
			if (map[j][k] == (i + 'A'))
				map[j][k] = '.';
			k++;
		}
		j++;
	}
	return (map);
}

int				ft_checkmap(char ***tetro, char **map, char ***tmp, int i)
{
	int j;
	int k;

	j = 0;
	while (map[j] != NULL)
	{
		k = 0;
		while (map[j][k] != '\0')
		{
			if (map[j][k] == (i + 'A'))
			{
				map = ft_repointmap(map, i);
				return (ft_tmpmodif(tetro, map, tmp, i));
				k++;
			}
			if (tmp[i][j][k] == '#' && map[j][k] != '.')
				return (ft_tmpmodif(tetro, map, tmp, i));
			k++;
		}
		j++;
	}
	map = ft_tmp_to_map(map, tmp, i);
	return (1);
}
