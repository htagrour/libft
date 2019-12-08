/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 22:48:14 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/15 23:05:14 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	if (!c)
		return ((char*)&s[ft_strlen(s)]);
	while (*s)
	{
		if (*s == (char)c)
			res = (char*)s;
		s++;
	}
	return (res);
}
