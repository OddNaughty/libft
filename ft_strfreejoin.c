/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/10 02:49:39 by cwagner           #+#    #+#             */
/*   Updated: 2014/06/10 02:49:39 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfreejoin(char **s1, char const *s2)
{
	char	*joined;

	if ((joined = ft_strjoin(*s1, s2)) == NULL)
		return (NULL);
	ft_strdel(s1);
	return (joined);
}
