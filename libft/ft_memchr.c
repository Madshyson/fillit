/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:07:59 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/14 15:53:29 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	d;
	size_t			i;

	i = 0;
	d = c;
	tmp = (unsigned char*)s;
	while (i < n)
	{
		if (tmp[i] == d)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
