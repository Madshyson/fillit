/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:01:33 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/15 15:23:16 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	int		i;
	char	*dest;

	i = 0;
	if (str != NULL)
	{
		dest = (char*)malloc(sizeof(*str) * ft_strlen(str) + 1);
//		if (!dest)
//			return (NULL);
		while (str[i] != '\0')
		{
			dest[i] = f(str[i]);
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}
