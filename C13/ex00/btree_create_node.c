/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 12:08:42 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/28 12:08:46 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *g;

	g = (t_btree *)malloc(sizeof(t_btree));
	if (g == 0)
		return (0);
	g->item = item;
	g->left = 0;
	g->right = 0;
	return (g);
}
