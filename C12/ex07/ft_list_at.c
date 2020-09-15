/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:57:35 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/27 16:57:40 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	if (begin_list)
	{
		while (i < nbr && begin_list)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	if (i != nbr || nbr < 0 || !(begin_list))
		return (0);
	return (begin_list);
}
