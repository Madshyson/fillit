/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:53:00 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/27 12:10:57 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*f;

	i = 0;
	j = 0;
	s = (char*)str;
	f = (char*)find;
	if (s[i] == '\0' && f[j] == '\0')
		return (&s[i]);
	if (s[i] != '\0' && f[j] == '\0')
		return (&s[i]);
	while (s[i] != '\0' && i < n)
	{
		while (f[j] != '\0' && s[i + j] != '\0' && s[i + j] == f[j])
			j++;
		if ((i + j) > n)
			return (0);
		if (f[j] == '\0')
			return (&s[i]);
		j = 0;
		i++;
	}
	return (0);
}
