/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:14:13 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/04 17:14:16 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		cc;
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t				i;

	i = 0;
	cc = c;
	p_dst = dst;
	p_src = src;
	while (i < n)
	{
		if (p_src[i] == cc)
		{
			p_dst[i] = p_src[i];
			return (dst + i + 1);
		}
		p_dst[i] = p_src[i];
		i++;
	}
	return (NULL);
}
