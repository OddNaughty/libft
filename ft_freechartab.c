/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freechartab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 04:20:35 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/03 21:34:18 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_freechartab(char ***tab)
{
	int		i;

	i = 0;
	if (!(*tab))
		return (-1);
	else
	{
		while ((*tab)[i])
		{
			ft_strdel(&((*tab)[i]));
			if ((*tab)[i])
				return (-1);
			i++;
		}
		free(*tab);
		*tab = NULL;
	}
	return (0);
}
