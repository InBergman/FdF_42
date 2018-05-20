/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:36:18 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 13:26:28 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	int				length;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	length = ft_strlen(s);
	s2 = (char *)malloc((length + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (length--)
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
