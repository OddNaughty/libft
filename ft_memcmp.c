/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:43:32 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:57:04 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*ss1;
	const unsigned char		*ss2;

	ss1 = s1;
	ss2 = s2;
	if (!ss1 || !ss2 || !n)
		return (0);
	while ((*ss1 == *ss2) && n-- > 1)
	{
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
