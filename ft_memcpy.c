/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:53:55 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:57:28 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char			*cp1;
	unsigned const char		*cp2;

	cp1 = s1;
	cp2 = s2;
	while (n--)
		*cp1++ = *cp2++;
	return (s1);
}

void	*ft_mem_not_null_cpy(void *s1, void *s2, size_t n)
{
	unsigned char	*cp1;
	unsigned char	*cp2;
	int				i;

	cp1 = s1;
	cp2 = s2;
	i = -1;
	while (i++, i < (int)n)
	{
		if (cp2[i] != 0)
			cp1[i] = cp2[i];
	}
	return (s1);
}
