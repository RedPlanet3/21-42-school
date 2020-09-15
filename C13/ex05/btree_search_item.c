/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:00:50 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/28 23:00:53 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(data_ref, root->item))
		{
			if (root->right)
				btree_search_item(root->right, data_ref, cmpf);
		}
		else
			return (root);
	}
	return (0);
}
