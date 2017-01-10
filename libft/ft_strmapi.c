/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:07:24 by mcourtia          #+#    #+#             */
/*   Updated: 2015/12/15 15:32:41 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (str != NULL)
	{
		dest = (char*)malloc(sizeof(*str) * ft_strlen(str) + 1);
//		if (!dest)
//			return (NULL);
		while (str[i] != '\0')
		{
			dest[i] = f(i, str[i]);
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}
