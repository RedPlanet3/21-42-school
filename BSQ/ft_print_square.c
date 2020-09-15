/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 19:32:10 by nvictor           #+#    #+#             */
/*   Updated: 2020/09/02 10:47:44 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <unistd.h>

void	ft_print_square(int **im, t_sq sq, t_map map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < map.q_line)
	{
		j = 0;
		while (j < map.len)
		{
			if (im[i][j] == 0)
				write(1, &map.obs, 1);
			else if (ft_not_square(sq, j, i))
				write(1, &map.empty, 1);
			else
				write(1, &map.full, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
