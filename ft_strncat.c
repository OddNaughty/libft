/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:56:52 by cwagner           #+#    #+#             */
/*   Updated: 2013/11/25 11:53:20 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i] != '\0')
		s1[j++] = s2[i++];
	s1[j] = '\0';
	return (s1);
}
