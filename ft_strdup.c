/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:47:50 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:58:49 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*ss1;
	unsigned int	len;

	len = ft_strlen(s1);
	ss1 = malloc ((1 + len) * sizeof(char));
	if (ss1 == NULL)
		return (NULL);
	ft_memcpy(ss1, s1, len + 1);
	return (ss1);
}
