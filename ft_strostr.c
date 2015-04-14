/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuono <sbuono@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:08:49 by sbuono            #+#    #+#             */
/*   Updated: 2013/11/26 16:08:51 by sbuono           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strostr(const char *src, const char *s1)
{
	unsigned int		nb;

	nb = 0;
	while (*src)
	{
		if (*src == *s1 && !(ft_strncmp(src, s1, ft_strlen(s1))))
		{
			++nb;
			src = src + (ft_strlen(s1));
		}
		else
			src++;
	}
	return (nb);
}
