/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:24:29 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/27 11:29:30 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char*)str;
	while (dest[i] != '\0')
	{
		if (dest[i] == c)
			return (&dest[i]);
		i++;
	}
	if (c == 0)
		return (&dest[i]);
	return (0);
}
