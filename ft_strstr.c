/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:16:57 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 12:03:43 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if (!*s1 || !*s2)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i - j);
		}
		if (j)
			i -= j;
		i++;
	}
	return (NULL);
}
