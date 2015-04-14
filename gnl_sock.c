/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_sock.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 18:47:54 by cwagner           #+#    #+#             */
/*   Updated: 2014/05/14 14:31:17 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/socket.h>

static int		malloc_more(char **buf, int size)
{
	int		i;
	char	*tmp;

	tmp = *buf;
	*buf = malloc(sizeof(char) * (ft_strlen(tmp) + size + 1));
	i = -1;
	while (tmp[++i] != '\0')
		(*buf)[i] = tmp[i];
	(*buf)[i] = '\0';
	free(tmp);
	return (i);
}

static int		get_part(char **buf, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = *buf;
	while (tmp[i] != '\0' && tmp[i] != '\n')
		i++;
	if (tmp[i] != '\n')
		return (0);
	tmp[i] = '\0';
	*line = ft_strdup(*buf);
	*buf = ft_strdup(*buf + i + 1);
	free(tmp);
	return (1);
}

int				gnl_sock(int const fd, char **line)
{
	static char		*buf = NULL;
	int				ret;
	int				i;
	static int		real = 1;

	if (!real)
		return (0);
	if (buf == NULL)
		buf = ft_strdup("");
	if (get_part(&buf, line))
		return (1);
	i = malloc_more(&buf, BUF_SIZE);
	ret = recv(fd, buf + i, BUF_SIZE, 0);
	if (ret == -1)
		return (-1);
	buf[i + ret] = '\0';
	if (ret != 0)
		return (gnl_sock(fd, line));
	*line = ft_strdup(buf);
	free(buf);
	return (real--);
}
