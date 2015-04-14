/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaye <mfaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:42:50 by mfaye             #+#    #+#             */
/*   Updated: 2014/03/27 12:03:21 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_ui		count_words(char const *s)
{
	t_ui	i;

	i = 0;
	while (*s == ' ' || *s == '\t')
		s++;
	while (*s)
	{
		while (*s && (*s != ' ') && (*s != '\t'))
			s++;
		i++;
		while (*s && ((*s == ' ') || (*s == '\t')))
			s++;
	}
	return (i);
}

static t_ui		*get_word_len(t_ui word_c, char const *s)
{
	t_ui	i;
	t_ui	j;
	t_ui	*word_len;

	i = 0;
	j = 0;
	word_len = malloc(sizeof(t_ui) * word_c);
	while (*s == ' ' || *s == '\t')
		s++;
	while (*s)
	{
		while (*s && (*s != ' ') && (*s != '\t'))
		{
			j++;
			s++;
		}
		word_len[i] = j;
		j = 0;
		i++;
		while (*s && ((*s == ' ') || (*s == '\t')))
			s++;
	}
	return (word_len);
}

static char		**build_array(t_ui w_c, t_ui *word_l)
{
	char	**split;
	t_ui	i;

	i = 0;
	split = malloc(sizeof(char *) * (w_c + 1));
	while (i < w_c)
	{
		split[i] = ft_strnew((size_t)word_l[i] + 1);
		i++;
	}
	split[i] = NULL;
	return (split);
}

char			**ft_strsplitwhite(char const *s)
{
	t_ui	word_count;
	char	**split;
	t_ui	*word_len;
	t_ui	i;
	t_ui	j;

	j = 0;
	i = 0;
	word_count = count_words(s);
	word_len = get_word_len(word_count, s);
	split = build_array(word_count, word_len);
	while (*s == ' ' || *s == '\t')
		s++;
	while (*s)
	{
		while (*s && (*s != ' ') && (*s != '\t'))
			split[i][j++] = *s++;
		j = 0;
		while (*s && ((*s == ' ') || (*s == '\t')))
			s++;
		i++;
	}
	free(word_len);
	return (split);
}
