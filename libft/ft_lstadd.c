/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:11:04 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/04 17:11:07 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd(t_list **alst, t_list *new)
{
	t_list		*begin_lst;

	begin_lst = *alst;
	new->next = begin_lst;
	*alst = new;
}
