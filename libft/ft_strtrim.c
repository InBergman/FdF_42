/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:43:23 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 13:32:52 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strtrim(char const *s)
{
	char			*str;
	int				length;
	int				start;
	int				i;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	length = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[length] == ' ' || s[length] == '\n' || s[length] == '\t')
		length--;
	if (length == -1)
		length = 0;
	else
		length = length - start + 1;
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (length--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
