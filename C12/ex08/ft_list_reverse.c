/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:57:58 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/27 16:58:01 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *now;
	t_list *nn;
	t_list *pr;

	pr = 0;
	if (begin_list)
	{
		now = *begin_list;
		while (now)
		{
			nn = now->next;
			now->next = pr;
			pr = now;
			now = nn;
		}
		*begin_list = pr;
	}
}
