/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 01:49:05 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/22 15:18:04 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isbelong(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	start_index(char const *s1, char const *set)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (!isbelong(s1[i], set))
			break ;
		i++;
	}
	return (i);
}

static int	end_index(char const *s1, char const *set)
{
	int		i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (!isbelong(s1[i], set))
			break ;
		i--;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*tab;

	if (!s1)
		return (NULL);
	start = start_index(s1, set);
	end = end_index(s1, set);
	if (end < start)
		return (ft_strdup(""));
	tab = (char*)malloc(sizeof(char) * (end - start + 1) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (start <= end)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}
