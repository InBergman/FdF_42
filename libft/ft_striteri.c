/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:32:12 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/07 18:26:45 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;
	unsigned int		length;

	i = 0;
	length = 0;
	if (s && (*f))
	{
		length = ft_strlen(s);
		while (i < length)
		{
			(*f)(i++, s++);
		}
	}
}
