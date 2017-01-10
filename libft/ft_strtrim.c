/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:14:08 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/27 15:57:08 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_start(const char *str)
{
	int start;

	start = 0;
	if (str[start] == ' ' || str[start] == '\n' || str[start] == '\t')
	{
		while (str[start] == ' ' || str[start] == '\n' || str[start] == '\t')
			start++;
	}
	return (start);
}

static int		ft_end(const char *str)
{
	int end;

	end = ft_strlen(str);
	end--;
	if (str[end] == ' ' || str[end] == '\n' || str[end] == '\t')
	{
		while (str[end] == ' ' || str[end] == '\n' || str[end] == '\t')
			end--;
	}
	end++;
	return (end);
}

char			*ft_strtrim(const char *str)
{
	char	*dest;
	int		start;
	int		end;
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '\0')
	{
		dest = "\0";
		return (dest);
	}
	i = 0;
	start = ft_start(str);
	end = ft_end(str);
	dest = (char*)malloc(sizeof(char) * (end - start + 1));
	while (start < end)
	{
		dest[i] = str[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
