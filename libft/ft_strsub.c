/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:41:52 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/07 16:59:54 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;

	i = 0;
	dest = (char*)malloc(sizeof(*str) * (len + 1));
	if (dest)
	{
		while (i < len)
		{
			dest[i] = str[start];
			i++;
			start++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
