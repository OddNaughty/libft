/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:53:36 by cwagner           #+#    #+#             */
/*   Updated: 2013/12/01 17:07:26 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	len2;

	len2 = ft_strlen(s2);
	i = 0;
	while (i < len2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	if (n > len2)
	{
		while (i < n)
			s1[i++] = '\0';
	}
	return (s1);
}
