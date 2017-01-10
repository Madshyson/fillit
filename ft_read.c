/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cond.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:47:46 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/26 17:36:40 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void			ft_error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}

static char		*ft_read(char *str)
{
	int		fd;
	int		i;
	char	*buf;

	fd = open(str, O_RDONLY);
	buf = (char*)malloc(sizeof(*buf) * (BUF_SIZE + 1));
	i = read(fd, buf, BUF_SIZE);
	if (read(fd, buf, BUF_SIZE) < 0)
		ft_error();
	buf[i] = '\0';
	if (buf[0] == '\0')
		ft_error();
	return (buf);
}

int				main(int argc, char **argv)
{
	int		i;
	int		n;
	char	**tab;

	if (argc == 2)
	{
		i = 0;
		n = ft_conditions(ft_read(argv[1]));
		tab = ft_split(ft_read(argv[1]));
		if (n == 0)
			ft_error();
		else
			ft_resplit(tab);
	}
	else
		ft_error();
	return (0);
}
