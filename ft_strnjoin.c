/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 13:33:54 by cwagner           #+#    #+#             */
/*   Updated: 2013/12/30 23:23:55 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	unsigned int	len;
	char			*ret;

	len = ft_strlen(s1) + n;
	ret = ft_strnew(len + 1);
	if (!ret)
		return (NULL);
	ret = ft_strcpy(ret, s1);
	ft_strncat(ret, s2, n);
	return (ret);
}
