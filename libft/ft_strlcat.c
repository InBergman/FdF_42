/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:32:49 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/04 17:32:51 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t					ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t				len;
	size_t				i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	len = i;
	while (src[i - len] && i < (size - 1))
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < size)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
