/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <mberedda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:10:47 by mberedda          #+#    #+#             */
/*   Updated: 2016/01/14 17:54:39 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlength(int n)
{
	int			i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char		*ft_intmax(void)
{
	char		*str;

	str = ft_strnew(11);
	if (!str)
		return (NULL);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			length;
	int			is_negative;

	length = ft_intlength(n);
	if (n == -2147483648)
		return (ft_intmax());
	str = ft_strnew(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n > 9)
	{
		str[--length] = (n % 10) + 48;
		n = n / 10;
	}
	str[--length] = (n % 10) + 48;
	if (is_negative)
		str[--length] = '-';
	return (str);
}
