/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 23:45:15 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/22 16:23:06 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *des, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size && des != src)
	{
		while (src[i] && i < size - 1)
		{
			des[i] = src[i];
			++i;
		}
		des[i] = '\0';
	}
	return (ft_strlen(src));
}
