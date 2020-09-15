/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:00:31 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/28 23:00:35 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (*root)
	{
		if (cmpf(item, *root) < 0)
		{
			if ((*root)->left)
				btree_insert_data(&(*root)->left, item, cmpf);
			else
				(*root)->left = btree_create_node(item);
		}
		else
		{
			if ((*root)->right)
				btree_insert_data(&(*root)->right, item, cmpf);
			else
				(*root)->right = btree_create_node(item);
		}
	}
	else
		*root = btree_create_node(item);
}
