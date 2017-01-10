/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:49:16 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/15 15:40:19 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_spec(void)
{
	char	*res;

	res = (char*)malloc(sizeof(char) * 12);
	res = "-2147483648";
	return (res);
}

static int		ft_intlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_intlen(n);
	str = (char*)malloc(sizeof(char) * (i + 1));
	if (n == -2147483648)
		return (ft_spec());
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[i - 1] = '0';
	while (n != '\0')
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
