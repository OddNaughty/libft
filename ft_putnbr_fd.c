/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 22:52:00 by cwagner           #+#    #+#             */
/*   Updated: 2013/11/26 21:49:54 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	overflow;

	overflow = n;
	if (overflow < 0)
	{
		ft_putchar_fd('-', fd);
		overflow = -overflow;
	}
	if (overflow >= 10)
	{
		ft_putnbr_fd(overflow / 10, fd);
		ft_putnbr_fd(overflow % 10, fd);
	}
	else
		ft_putchar_fd(overflow + 48, fd);
}
