/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:13:12 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 14:52:48 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*newlst;
	t_list		*begin_lst;

	begin_lst = NULL;
	if (!lst || !f)
		return (NULL);
	if (lst)
	{
		newlst = (*f)(ft_lstnew(lst->content, lst->content_size));
		begin_lst = newlst;
		while (lst->next)
		{
			lst = lst->next;
			newlst->next = (*f)(ft_lstnew(lst->content, lst->content_size));
			newlst = newlst->next;
		}
	}
	return (begin_lst);
}
