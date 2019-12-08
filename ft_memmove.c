/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:10:28 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/19 06:08:46 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t len)
{
	void	*tab[len];

	if ((!des && !src) || len >= (128 * 1024 * 1024))
		return (NULL);
	if (src != des)
	{
		ft_memcpy(tab, src, len);
		ft_memcpy(des, tab, len);
	}
	return (des);
}
