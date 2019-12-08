/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:20:45 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/20 13:06:53 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *des, const void *src,
										int c, size_t n)
{
	size_t				i;
	unsigned char		*des1;
	const unsigned char	*src1;

	if (des != src)
	{
		des1 = des;
		src1 = src;
	}
	i = 0;
	while (n--)
	{
		*des1++ = *src1++;
		if ((unsigned char)c == *src1)
		{
			*des1++ = *src1;
			return ((void*)(des1));
		}
	}
	return (NULL);
}
