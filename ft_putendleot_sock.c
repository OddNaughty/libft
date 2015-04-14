/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendleot_sock.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 18:30:46 by cwagner           #+#    #+#             */
/*   Updated: 2014/05/14 19:21:08 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/socket.h>

void	ft_putendleot_sock(char const *s, int fd)
{
	if (s)
	{
		send(fd, s, ft_strlen(s), 0);
		send(fd, "\n", 1, 0);
		send(fd, EOT, ft_strlen(EOT), 0);
		send(fd, "\n", 1, 0);
	}
}
