/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 13:24:39 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 16:57:47 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static	void	ft_rewritetmp(char **tmp, char **tetro, int lenmap)
{
	int j;
	int k;

	j = 0;
	while (j < lenmap)
	{
		k = 0;
		while (k < lenmap)
		{
			if (j < 4 && k < 4 && tetro[j][k] == '#')
				tmp[j][k] = '#';
			else
				tmp[j][k] = '.';
			k++;
		}
		j++;
	}
}

static char		***ft_cpy(char ***tmp, char ***tetro, int lenmap, int nbtetro)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < nbtetro)
	{
		j = 0;
		while (j < lenmap)
		{
			k = 0;
			while (k < lenmap)
			{
				if (j < 4 && k < 4)
					tmp[i][j][k] = tetro[i][j][k];
				else
					tmp[i][j][k] = '.';
				k++;
			}
			j++;
		}
		i++;
	}
	return (tmp);
}

static char		***ft_malloctmp(char ***tmp, int lenmap, int nbtetro, int i)
{
	int j;

	while (i < nbtetro)
	{
		j = 0;
		tmp[i] = (char**)malloc(sizeof(char*) * (lenmap + 1));
		tmp[i][lenmap] = NULL;
		while (j < lenmap)
		{
			tmp[i][j] = (char*)malloc(sizeof(char) * (lenmap + 1));
			tmp[i][j][lenmap] = '\0';
			j++;
		}
		i++;
	}
	return (tmp);
}

void			ft_createtmp(char ***tetro, char **map, int nbtetro, int i)
{
	char	***tmp;
	int		lenmap;

	lenmap = 0;
	tmp = (char***)malloc(sizeof(char**) * (nbtetro + 1));
	tmp[nbtetro] = NULL;
	while (map[lenmap] != NULL)
		lenmap++;
	tmp = ft_malloctmp(tmp, lenmap, nbtetro, 0);
	tmp = ft_cpy(tmp, tetro, lenmap, nbtetro);
	while (tetro[i] != NULL && i >= 0)
	{
		if (ft_checkmap(tetro, map, tmp, i))
			i++;
		else
		{
			ft_rewritetmp(tmp[i], tetro[i], lenmap);
			i--;
		}
	}
	free(tmp);
	if (i < 0)
		ft_remap(tetro, map, nbtetro, 0);
	else
		ft_print(map, nbtetro);
}
