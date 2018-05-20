/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:40:36 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 13:27:50 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		length;
	int		i;

	length = ft_strlen(s);
	i = 0;
	while (length >= i)
	{
		if (s[length] == c)
			return ((char*)s + length);
		length--;
	}
	return (0);
}
