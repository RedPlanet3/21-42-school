/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:55:57 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/27 16:56:00 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list)
	{
		while (begin_list->next)
			begin_list = begin_list->next;
		return (begin_list);
	}
	return (0);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *alist;
	t_list *endlist;

	endlist = ft_list_last(*begin_list);
	alist = ft_create_elem(data);
	if (endlist)
		endlist->next = alist;
	else
		*begin_list = alist;
}
