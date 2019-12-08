/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:44:44 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/20 13:56:24 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tab;

	if (!f || !s)
		return (NULL);
	tab = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (s[++i])
		tab[i] = (*f)(i, s[i]);
	tab[i] = '\0';
	return (tab);
}
