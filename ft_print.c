/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 13:17:42 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 14:41:46 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static void		ft_3per3(char **map)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

static void		ft_verif(char **map, int nbtetro)
{
	int i;
	int j;

	i = 0;
	if (nbtetro == 1 && map[0][0] == 'A' && map[0][1] == 'A' &&
			map[1][0] == 'A' && map[1][1] == 'A')
	{
		while (i < 2)
		{
			j = 0;
			while (j < 2)
			{
				write(1, &map[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else if (map[0][3] == '.' && map[1][3] == '.' && map[2][3] == '.' &&
			map[3][0] == '.' && map[3][1] == '.' && map[3][2] == '.')
		ft_3per3(map);
	else
		ft_print(map, 3);
}

void			ft_print(char **map, int nbtetro)
{
	int i;

	if (nbtetro <= 2)
		ft_verif(map, nbtetro);
	else
	{
		i = 0;
		while (map[i] != NULL)
		{
			ft_putendl(map[i]);
			i++;
		}
	}
}
