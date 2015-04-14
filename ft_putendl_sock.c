/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_sock.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 13:01:49 by cwagner           #+#    #+#             */
/*   Updated: 2014/05/14 18:32:43 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/socket.h>

void	ft_putendl_sock(char const *s, int fd)
{
	if (s)
	{
		send(fd, s, ft_strlen(s), 0);
		send(fd, "\n", 1, 0);
	}
}
