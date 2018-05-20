/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <mberedda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:13:55 by mberedda          #+#    #+#             */
/*   Updated: 2016/12/06 15:03:10 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				*ft_memalloc(size_t size)
{
	unsigned char	*ret;
	int				i;

	i = 0;
	ret = malloc(sizeof(void) * size);
	if (!ret || size == 0)
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}