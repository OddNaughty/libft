/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaye <mfaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:42:50 by mfaye             #+#    #+#             */
/*   Updated: 2014/03/27 12:02:38 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_ui		count_words(char const *s, char c)
{
	t_ui	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s && (*s != c))
			s++;
		i++;
		while (*s && (*s == c))
			s++;
	}
	return (i);
}

static t_ui		*get_word_len(t_ui word_c, char const *s, \
								char c)
{
	t_ui	i;
	t_ui	j;
	t_ui	*word_len;

	i = 0;
	j = 0;
	word_len = malloc(sizeof(t_ui) * word_c);
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s && (*s != c))
		{
			j++;
			s++;
		}
		word_len[i] = j;
		j = 0;
		i++;
		while (*s && (*s == c))
			s++;
	}
	return (word_len);
}

static char		**build_array(t_ui w_c, t_ui *word_l)
{
	char	**split;
	t_ui	i;

	i = 0;
	split = (char **)ft_memalloc(sizeof(char *) * (w_c + 1));
	while (i < w_c)
	{
		split[i] = ft_strnew((size_t)word_l[i] + 1);
		i++;
	}
	split[i] = NULL;
	return (split);
}

char			**ft_strsplit(char const *s, char c)
{
	t_ui	word_count;
	char	**split;
	t_ui	*word_len;
	t_ui	i;
	t_ui	j;

	j = 0;
	i = 0;
	word_count = count_words(s, c);
	word_len = get_word_len(word_count, s, c);
	split = build_array(word_count, word_len);
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s && (*s != c))
			split[i][j++] = *s++;
		j = 0;
		while (*s && (*s == c))
			s++;
		i++;
	}
	free(word_len);
	return (split);
}
