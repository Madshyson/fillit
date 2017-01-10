/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:28:56 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/30 19:16:42 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_init(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	int i;
	int res;
	int mult;

	mult = 1;
	i = ft_init(str);
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	while (i >= 0)
	{
		if (str[i] == '-')
			return (res * -1);
		if (str[i] == '+' || str[i] == ' ')
			return (res);
		res = (str[i] - '0') * mult + res;
		mult = mult * 10;
		i--;
	}
	return (res);
}
