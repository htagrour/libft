/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:06:29 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/17 22:51:36 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	int		i;
	char	*a;

	i = 0;
	a = (char*)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!a)
		return (0);
	while (str[i])
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
