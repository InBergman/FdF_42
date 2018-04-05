/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:14:50 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/04 17:14:53 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*p_s;
	unsigned char			cc;
	size_t					i;

	p_s = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == cc)
			return (void*)(p_s + i);
		i++;
	}
	return (NULL);
}
