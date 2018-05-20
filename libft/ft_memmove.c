/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:16:42 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/04 17:16:48 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = dst;
	p_src = src;
	if (p_src <= p_dst)
	{
		p_src = p_src + (len - 1);
		p_dst = p_dst + (len - 1);
		while (len--)
		{
			*p_dst-- = *p_src--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
