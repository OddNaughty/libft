/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuono <sbuono@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 11:41:41 by sbuono            #+#    #+#             */
/*   Updated: 2013/11/27 12:43:40 by sbuono           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_star(const char *s1, const char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (!*s1 && *s2 == '*')
		return (ft_star(s1, s2 + 1));
	else if (*s2 == '*' && *s1)
		return ((ft_star(s1 + 1, s2) || ft_star(s1, s2 + 1)));
	else if (*s1 == *s2)
		return (ft_star(s1 + 1, s2 + 1));
	else
		return (0);
}
