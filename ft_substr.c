/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:06:19 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/20 13:49:36 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;

	if (!s)
		return (NULL);
	tab = (char*)malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (s[start] && len--)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
