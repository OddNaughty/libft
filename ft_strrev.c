/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 15:20:32 by cwagner           #+#    #+#             */
/*   Updated: 2015/01/21 22:18:14 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char const *s1)
{
	char			*ret;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s1);
	ret = ft_strnew(len + 1);
	if (!ret)
		return (ret);
	while (i < len)
	{
		ret[i] = s1[len - i - 1];
		i++;
	}
	return (ret);
}
