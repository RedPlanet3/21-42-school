/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 11:21:23 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/27 11:21:27 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *a;

	a = (t_list *)malloc(sizeof(t_list));
	a->data = data;
	a->next = 0;
	return (a);
}
