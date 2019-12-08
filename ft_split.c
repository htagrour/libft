/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:30:20 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/22 16:43:22 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words_number(char const *str, char c)
{
	int			i;
	int			space_flag;
	int			words_number;

	words_number = 0;
	space_flag = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			space_flag = 1;
		else
		{
			words_number += space_flag;
			space_flag = 0;
		}
		i++;
	}
	return (words_number);
}

static void		delet_all(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
}

static void		add_letters(int len, int pos, char const *str, char *tab)
{
	int			k;

	k = 0;
	while (k < len)
	{
		tab[k] = str[pos + k];
		k++;
	}
	tab[k] = '\0';
}

static char		**add_words(char const *str, char **tab, char c, int i)
{
	int			len;
	int			j;

	j = 0;
	while (str[i])
	{
		len = 0;
		while (str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i + len] && str[i + len] != c)
				len++;
			if ((tab[j] = (char*)malloc(sizeof(*tab[j]) * (len + 1))) == NULL)
			{
				delet_all(tab, j);
				return (NULL);
			}
			add_letters(len, i, str, tab[j]);
			j++;
			i += len;
		}
	}
	tab[j] = 0;
	return (tab);
}

char			**ft_split(char const *str, char c)
{
	char		**tab;
	int			wnb;
	int			i;

	i = 0;
	if (!str)
		return (NULL);
	wnb = words_number(str, c);
	tab = (char**)malloc(sizeof(*tab) * (wnb + 1));
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	return (add_words(str, tab, c, i));
}
