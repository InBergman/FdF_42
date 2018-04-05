/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 11:10:20 by mberedda          #+#    #+#             */
/*   Updated: 2016/03/17 16:25:05 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_print_int_table(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}
