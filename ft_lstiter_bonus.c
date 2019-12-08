/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htagrour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:31:21 by htagrour          #+#    #+#             */
/*   Updated: 2019/10/20 23:04:18 by htagrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void*))
{
	t_list	*tem;

	if (f && list)
	{
		tem = list;
		while (tem)
		{
			(*f)(tem->content);
			tem = tem->next;
		}
	}
}
