/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuono <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/15 12:22:39 by sbuono            #+#    #+#             */
/*   Updated: 2014/05/15 12:22:39 by sbuono           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

char	*ft_glue(int nb_arg, ...)
{
	va_list	al;
	char	*tmp;
	char	*tmp2;
	char	*tmp3;
	int		i;

	i = 0;
	if (nb_arg < 2)
		return (NULL);
	va_start(al, nb_arg);
	tmp = va_arg(al, char*);
	while (++i < nb_arg)
	{
		tmp2 = va_arg(al, char*);
		tmp3 = ft_strjoin(tmp, tmp2);
		if (i > 1)
			free(tmp);
		tmp = tmp3;
	}
	va_end(al);
	return (tmp);
}
