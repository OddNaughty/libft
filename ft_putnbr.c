/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 22:52:00 by cwagner           #+#    #+#             */
/*   Updated: 2015/01/21 22:17:57 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	overflow;

	overflow = n;
	if (overflow < 0)
	{
		ft_putchar('-');
		overflow = -overflow;
	}
	if (overflow >= 10)
	{
		ft_putnbr(overflow / 10);
		ft_putnbr(overflow % 10);
	}
	else
		ft_putchar(overflow + 48);
}
