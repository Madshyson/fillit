/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:43:41 by mcourtia          #+#    #+#             */
/*   Updated: 2015/11/30 11:49:15 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp1;
	t_list	*tmp2;

	new = NULL;
	if (lst)
	{
		new = (*f)(lst);
		tmp2 = new;
		lst = lst->next;
		while (lst)
		{
			tmp1 = (*f)(lst);
			tmp2->next = tmp1;
			tmp2 = tmp1;
			lst = lst->next;
		}
		tmp2->next = NULL;
	}
	return (new);
}
