/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:02:07 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:58:00 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*ss1;
	const char	*ss2;

	ss1 = s1;
	ss2 = s2;
	if (ft_strlen(ss1) < ft_strlen(ss2))
	{
		while (n--)
			ss1[n] = ss2[n];
	}
	else
	{
		while (n--)
			*ss1++ = *ss2++;
	}
	return (s1);
}
