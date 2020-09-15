/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:57:16 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/27 16:57:20 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *buf;

	while (begin_list)
	{
		buf = begin_list;
		begin_list = begin_list->next;
		(*free_fct)(buf->data);
		free(buf);
	}
}
