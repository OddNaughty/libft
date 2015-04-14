/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:56:25 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:56:27 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	unsigned char		cc;
	int					i;

	ss = s;
	cc = c;
	i = 0;
	if (!ss || !n)
		return (NULL);
	while (n--)
	{
		if (ss[i] == cc)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
