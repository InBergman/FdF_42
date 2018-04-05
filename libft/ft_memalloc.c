/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:13:55 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 14:17:40 by mberedda         ###   ########.fr       */
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
	while (size--)
		ret[i++] = '\0';
	ret[i] = '\0';
	return (ret);
}
