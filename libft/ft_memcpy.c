/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:05:35 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/26 15:19:02 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp1;
	unsigned const char	*tmp2;
	size_t				i;

	tmp1 = (unsigned char*)dest;
	tmp2 = (unsigned const char*)src;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dest);
}
