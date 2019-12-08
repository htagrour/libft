/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 02:53:17 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/22 00:07:22 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t' ||
			c == '\v' ||
			c == '\r' ||
			c == '\n' ||
			c == ' ' ||
			c == '\f');
}

static void	remove_blank(const char *str, int *sign, int *i)
{
	while (ft_isspace(str[*i]))
		*i += 1;
	if (str[*i] == '-')
	{
		*sign = -1;
		*i += 1;
	}
	else if (str[*i] == '+')
		*i += 1;
}

int			ft_atoi(const char *str)
{
	long	res;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	res = 0;
	remove_blank(str, &sign, &i);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			res = res * 10 + (str[i] - '0');
		else
			break ;
		if (res > 4294967295 && sign > 0)
			return (-1);
		if (res > 4294967295 && sign < 0)
			return (0);
		i++;
	}
	return ((int)res * sign);
}
