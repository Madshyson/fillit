/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:43:53 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/27 09:42:13 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char*)str;
	while (dest[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (dest[i] == c)
			return (&dest[i]);
		i--;
	}
	return (0);
}
