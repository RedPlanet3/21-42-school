/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:52:21 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/27 16:52:28 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *alist;

	if (*begin_list)
	{
		alist = ft_create_elem(data);
		alist->next = *begin_list;
		*begin_list = alist;
	}
	else
		*begin_list = ft_create_elem(data);
}
