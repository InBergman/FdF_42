/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:13:33 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 14:41:51 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*t_newlst;

	t_newlst = (t_list *)malloc(sizeof(t_list));
	if (!t_newlst)
		return (NULL);
	if (content == NULL)
	{
		t_newlst->content = NULL;
		t_newlst->content_size = 0;
	}
	else
	{
		t_newlst->content = (void *)malloc(sizeof(void) * content_size);
		if (!t_newlst->content)
		{
			free((void *)t_newlst);
			return (NULL);
		}
		ft_memcpy(t_newlst->content, content, content_size);
		t_newlst->content_size = content_size;
	}
	t_newlst->next = NULL;
	return (t_newlst);
}
