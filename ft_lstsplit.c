/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 06:18:30 by cwagner           #+#    #+#             */
/*   Updated: 2014/03/27 11:52:41 by cwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_charlist	*ft_newlchar(char *str)
{
	t_charlist	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->val = ft_strdup(str);
	new->next = NULL;
	return (new);
}

void		ft_addblchar(t_charlist **list, char *str)
{
	t_charlist	*tmp;

	if (!*list)
		*list = (ft_newlchar(str));
	else
	{
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ft_newlchar(str);
	}
}

t_charlist	*ft_lstsplit(char *str, char c)
{
	char		**tab;
	int			cmp;
	t_charlist	*list;

	cmp = 0;
	if (!str)
		return (NULL);
	list = NULL;
	tab = ft_strsplit(str, c);
	while (tab[cmp])
	{
		ft_addblchar(&list, tab[cmp]);
		cmp++;
	}
	return (list);
}
