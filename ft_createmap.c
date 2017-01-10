/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:12:14 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 17:05:51 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void		ft_remap(char ***tetro, char **map, int nbtetro, int i)
{
	int n;
	int j;

	n = ft_strlen(map[0]);
	free(map);
	map = (char**)malloc(sizeof(char*) * (n + 2));
	while (i < (n + 1))
	{
		map[i] = (char*)malloc(sizeof(char) * (n + 2));
		j = 0;
		while (j < (n + 1))
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		i++;
	}
	map[i] = NULL;
	ft_createtmp(tetro, map, nbtetro, 0);
}

void		ft_createmap(char ***tetro, int n)
{
	char	**map;
	int		i;
	int		j;

	map = (char**)malloc(sizeof(char*) * 5);
	i = 0;
	while (i < 4)
	{
		map[i] = (char*)malloc(sizeof(char) * 5);
		j = 0;
		while (j < 4)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		i++;
	}
	map[i] = NULL;
	ft_createtmp(tetro, map, n, 0);
}
