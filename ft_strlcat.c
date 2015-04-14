/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:57:50 by cwagner           #+#    #+#             */
/*   Updated: 2013/12/31 14:28:32 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	len2;
	unsigned int	cmp;

	cmp = 0;
	len2 = ft_strlen(src);
	len = ft_strlen(dst);
	if (size <= len)
		return (size + len2);
	while ((cmp < size - len - 1) && src[cmp] != '\0')
	{
		dst[cmp + len] = src[cmp];
		cmp++;
	}
	dst[cmp + len] = '\0';
	return (len + len2);
}
