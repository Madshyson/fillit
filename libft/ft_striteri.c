/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:54:43 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/30 14:51:24 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			f(i, &str[i]);
			i++;
		}
	}
}
