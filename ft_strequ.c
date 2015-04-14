/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 19:15:55 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:59:13 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	i = ft_strnequ(s1, s2, ft_strlen(s1));
	return (i);
}
