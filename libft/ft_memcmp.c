/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:15:11 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/04 17:15:15 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*p_s1;
	const unsigned char		*p_s2;

	p_s1 = s1;
	p_s2 = s2;
	while (n--)
	{
		if (*p_s1 != *p_s2)
		{
			return (*p_s1 - *p_s2);
		}
		p_s1++;
		p_s2++;
	}
	return (0);
}
