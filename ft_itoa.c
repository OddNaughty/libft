/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuono <sbuono@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:30:48 by sbuono            #+#    #+#             */
/*   Updated: 2013/11/22 11:30:49 by sbuono           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_powerten(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (10);
	else
		return (10 * ft_powerten(n - 1));
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	str[15];
	char	*s;

	i = 0;
	j = 0;
	if (n == 0)
		str[i++] = '0';
	while ((n / ft_powerten(i)) != 0 && i < 10)
	{
		if (n < 0)
			str[i] = (((n / ft_powerten(i)) % 10) * -1) + 48;
		else
			str[i] = ((n / ft_powerten(i)) % 10) + 48;
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	s = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (--i > -1)
		s[j++] = str[i];
	s[j] = '\0';
	return (s);
}
