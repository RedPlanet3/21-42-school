/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:01:54 by hashly            #+#    #+#             */
/*   Updated: 2020/09/02 10:31:36 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_check_char(char buf, t_map map)
{
	if (buf == map.empty)
		return (1);
	else if (buf == map.obs)
		return (0);
	else
	{
		g_errno = 3;
		return (-1);
	}
}

int		ft_min_in(int i, int j, int k)
{
	int	min;

	min = i;
	if (min > j)
		min = j;
	if (min > k)
		min = k;
	return (min);
}

int		ft_algor(int num, int *im_pred, int j, int *in)
{
	if (num == -1)
		return (-1);
	if (j == 0)
		return (num);
	if (num == 0)
		return (0);
	return (ft_min_in(im_pred[j], im_pred[j - 1], in[j - 1]) + num);
}

int		ft_mem_alloc_check_error(int **im, t_map map, char *buf)
{
	int j;

	j = 0;
	if ((*im = (int *)malloc(sizeof(map.len) * (map.len + 1))) == (void *)0)
	{
		g_errno = 4;
		return (-1);
	}
	if ((j = read(g_fd, buf, map.len + 1)) < 0)
	{
		g_errno = 2;
		free(*im);
		return (-1);
	}
	else if (j == 0)
	{
		g_errno = 3;
		free(*im);
		return (-1);
	}
	return (0);
}

int		*ft_read_str(t_map map, t_sq *sq, int *im_pred, int i)
{
	int		*im;
	char	buf[map.len + 1];
	int		j;

	if ((ft_mem_alloc_check_error(&im, map, buf)) == -1)
		return ((void *)0);
	j = 0;
	while (j < map.len)
	{
		im[j] = ft_algor(ft_check_char(buf[j], map), im_pred, j, im);
		if (im[j] < 0)
		{
			free(im);
			return ((void *)0);
		}
		ft_check_square(sq, i, j, im[j]);
		j++;
	}
	if (buf[j] != '\n')
	{
		g_errno = 3;
		free(im);
		return ((void *)0);
	}
	return (im);
}
