/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:42:57 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 13:31:11 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		j = 0;
		if (s2[j] == s1[i])
		{
			while (s2[j] == s1[i + j] && s2[j])
			{
				if (s2[j + 1] == '\0')
				{
					return ((char*)s1 + i);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
