/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 16:19:32 by mberedda          #+#    #+#             */
/*   Updated: 2016/03/18 17:22:56 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void				ft_ini_val(t_env *e)
{
	int tmp;

	tmp = e->l_nbr + e->c_nbr;
	if (tmp < 10)
		tmp = 10;
	e->zoom = (WIN_Y) / (tmp / 10);
	e->ori_x = WIN_X / 2;
	e->ori_y = WIN_Y / 2;
	e->const_x = 0.1;
	e->const_y = 0.1;
	e->pow_z = 50;
}

void				ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

void				ft_free_line_tab(char **str)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		tmp = str[i];
		free(tmp);
		i++;
	}
	free(str);
}

unsigned int		ft_size_tab(char **str)
{
	unsigned int i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}
