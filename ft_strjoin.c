/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 14:30:18 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 12:00:06 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;
	int		i;
	int		sale;

	len = ft_strlen(s1) + ft_strlen(s2);
	new = ft_strnew(len);
	i = 0;
	sale = 0;
	if (s1)
	{
		while (s1[i])
			new[sale++] = s1[i++];
	}
	i = 0;
	if (s2)
	{
		while (s2[i])
			new[sale++] = s2[i++];
	}
	return (new);
}
