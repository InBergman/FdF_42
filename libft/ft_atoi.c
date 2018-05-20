/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:08:21 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/07 20:59:50 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative(const char *s, int i)
{
	if (s[i] == '-')
		return (1);
	else if (s[i] == '+')
		return (0);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int		d;
	int		nbr;
	int		negative;

	d = 0;
	nbr = 0;
	negative = 0;
	while (str[d] == ' ' || str[d] == '\n' || str[d] == '\r' || \
			str[d] == '\t' || str[d] == '\v' || str[d] == '\f')
		d++;
	if (str[d] == '+' || str[d] == '-')
	{
		negative = ft_negative(str, d);
		d++;
	}
	while (str[d] >= '0' && str[d] <= '9')
	{
		nbr = nbr * 10;
		nbr += (str[d] - '0');
		d++;
	}
	negative ? (nbr = -nbr) : (nbr);
	return (nbr);
}
