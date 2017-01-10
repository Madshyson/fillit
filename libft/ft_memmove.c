/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:52:34 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/15 15:51:41 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*tmp;
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	tmp = ft_strnew(n);
	ft_memcpy(tmp, s, n);
	ft_memcpy(d, tmp, n);
	return (dest);
}
