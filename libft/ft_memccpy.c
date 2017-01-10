/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:32:04 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/27 10:19:06 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*tmp1;
	const unsigned char *tmp2;
	size_t				i;
	unsigned char		d;

	tmp1 = dest;
	tmp2 = src;
	d = c;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		if (tmp2[i] == d)
		{
			i++;
			return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}
