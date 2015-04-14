/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:15:28 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 12:02:05 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = ft_strlen(s);
	cc = c;
	if (cc == '\0')
		return ((char *)s + i);
	while (s[i] != cc && i > 0)
	{
		i--;
		if (s[i] == cc)
			return ((char *)s + i);
	}
	return (NULL);
}
