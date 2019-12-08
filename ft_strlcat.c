/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 01:16:09 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/16 01:46:22 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *des, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	j;
	size_t	res;

	dlen = ft_strlen(des);
	slen = ft_strlen(src);
	if (size <= dlen)
		res = slen + size;
	else
		res = slen + dlen;
	if (size)
	{
		j = 0;
		while (src[j] != '\0' && dlen < size - 1)
			des[dlen++] = src[j++];
		des[dlen] = '\0';
	}
	return (res);
}
