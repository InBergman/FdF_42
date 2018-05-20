/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <mberedda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 14:27:28 by mberedda          #+#    #+#             */
/*   Updated: 2016/11/23 15:00:34 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_line(char **line, char *start)
{
	char			*end;

	end = ft_strchr(start, '\n');
	if (end != NULL)
	{
		*end = '\0';
		*line = ft_strdup(start);
		ft_memmove(start, &end[1], ft_strlen(&end[1]) + 1);
		return (1);
	}
	if (ft_strlen(start) > 0)
	{
		*line = ft_strdup(start);
		*start = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(int fd, char **line)
{
	static char		*start = NULL;
	long long		ret;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	if (!line || fd < 0)
		return (-1);
	if (start == NULL)
		start = ft_strnew(0);
	while (!ft_strchr(start, '\n'))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			return (check_line(line, start));
		buf[ret] = '\0';
		tmp = ft_strjoin(start, buf);
		ft_strdel(&start);
		start = tmp;
	}
	return (check_line(line, start));
}
