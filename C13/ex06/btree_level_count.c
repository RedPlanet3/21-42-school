/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:01:09 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/28 23:01:16 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	btree_level_count(t_btree *root)
{
	unsigned int h;

	h = 0;
	if (root)
	{
		h = 1;
		if (root->left)
			h = ft_max(h, 1 + btree_level_count(root->left));
		if (root->right)
			h = ft_max(h, 1 + btree_level_count(root->right));
	}
	return (h);
}
