/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:14:40 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/27 13:03:18 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *str, char const *find)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char*)str;
	if (str[i] == '\0' && find[j] == '\0')
		return (&dest[i]);
	while (str[i] != '\0')
	{
		while (find[j] != '\0' && str[i + j] != '\0' && str[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return (&dest[i]);
		else
			j = 0;
		i++;
	}
	return (0);
}
