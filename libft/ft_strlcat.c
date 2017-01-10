/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:59:56 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/14 12:09:45 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	i;
	size_t	ret;

	i = 0;
	if (size <= (ft_strnlen(dest, size) + 1))
		return (ft_strnlen(dest, size) + ft_strlen(src));
	n = ft_strlen(dest);
	ret = n + ft_strlen(src);
	while (src[i] != '\0')
	{
		if (n < size - 1)
		{
			dest[n] = src[i];
			n++;
		}
		i++;
	}
	dest[n] = '\0';
	return (ret);
}
