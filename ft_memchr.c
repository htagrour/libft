/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:48:22 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/15 19:55:01 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s1;

	s1 = s;
	while (n--)
	{
		if ((unsigned char)c == *s1)
			return ((void*)s1);
		s1++;
	}
	return (NULL);
}
