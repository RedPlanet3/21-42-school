/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diffuncs2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:24:22 by hashly            #+#    #+#             */
/*   Updated: 2020/09/02 10:48:42 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <stdlib.h>

void	ft_check_square(t_sq *sq, int i, int j, int a)
{
	if (a > sq->side)
	{
		sq->side = a;
		sq->x = j - a + 1;
		sq->y = i - a + 1;
	}
}

void	ft_write_error(int num)
{
	if (num == 1)
		ft_putstr("map error\n");
	else if (num == 2)
		ft_putstr("map error\n");
	else if (num == 3)
		ft_putstr("map error\n");
	else if (num == 4)
		ft_putstr("map error\n");
	g_errno = 0;
}

void	ft_free_im(int **im, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(im[i]);
		i++;
	}
	free(im);
}

t_sq	ft_defoult_square(void)
{
	t_sq	sq;

	sq.x = -1;
	sq.y = -1;
	sq.side = -1;
	return (sq);
}
