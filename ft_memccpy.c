/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:59:06 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:54:30 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	const unsigned char		*ss2;
	unsigned char			*ss1;
	unsigned char			cc;
	int						i;

	i = 0;
	ss2 = s2;
	ss1 = s1;
	cc = c;
	if (!ss2 || !ss1)
		return (NULL);
	while (n--)
	{
		if (ss2[i] == cc)
		{
			ss1[i] = ss2[i];
			i++;
			return ((char *)s1 + i);
		}
		ss1[i] = ss2[i];
		i++;
	}
	return (NULL);
}
