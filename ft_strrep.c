/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuono <sbuono@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:26:03 by sbuono            #+#    #+#             */
/*   Updated: 2013/11/26 15:26:03 by sbuono           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrep(const char *src, const char *s1, const char *s2)
{
	unsigned int	i;
	int				j;
	unsigned int	n;
	char			*tmp;

	n = ft_strostr(src, s1);
	i = ft_strlen(src) - (ft_strlen(s1) * n) + (ft_strlen(s2) * n);
	if (!(tmp = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (*src)
	{
		j = -1;
		if (*src == *s1 && !(ft_strncmp(src, s1, ft_strlen(s1))))
		{
			while (s2[++j])
				tmp[i++] = s2[j];
			src = src + ft_strlen(s1);
		}
		else
			tmp[i++] = *src++;
	}
	tmp[i] = '\0';
	return (tmp);
}
