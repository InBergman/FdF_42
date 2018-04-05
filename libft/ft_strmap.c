/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:34:28 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/07 18:34:28 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*s2;
	int				length;
	int				i;

	i = 0;
	length = 0;
	if (!s || !(*f))
		return (NULL);
	length = ft_strlen(s);
	s2 = (char *)malloc((length + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (length--)
	{
		s2[i] = (*f)(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
