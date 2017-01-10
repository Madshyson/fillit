/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:44:49 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/30 14:53:18 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *str, void (*f)(char *))
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			f(&str[i]);
			i++;
		}
	}
}