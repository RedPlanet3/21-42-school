/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 19:06:28 by hashly            #+#    #+#             */
/*   Updated: 2020/09/02 19:38:48 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*
**geger
*/

int		ft_kostil(t_sq *sq, t_map *map, int *j, char **argv)
{
	*sq = ft_defoult_square();
	if (argv != (void *)0)
	{
		if ((g_fd = open(argv[*j], O_RDONLY)) < 0)
		{
			ft_write_error(1);
			*j += 1;
			return (-1);
		}
	}
	else
		g_fd = 0;
	*map = ft_read_str_zero();
	if (map->q_line == -1)
	{
		ft_write_error(g_errno);
		*j += 1;
		return (-1);
	}
	return (0);
}

int		ft_kostil2(int ***im, int *j, t_map *map, t_sq *sq)
{
	if (!(*im = (int **)malloc(sizeof(int *) * map->q_line)))
	{
		ft_write_error(4);
		*j += 1;
		return (-1);
	}
	if ((*im[0] = ft_read_str_one(map, sq)) == (void *)0)
	{
		ft_write_error(g_errno);
		*j += 1;
		return (-1);
	}
	return (0);
}

int		ft_kostil3(int **im, t_map map, t_sq *sq)
{
	int i;

	i = 1;
	while (i < map.q_line)
	{
		if ((im[i] = ft_read_str(map, sq, im[i - 1], i)) == (void *)0)
		{
			ft_write_error(g_errno);
			return (i);
		}
		i++;
	}
	return (i);
}

void	ft_file_work(int argc, char **argv)
{
	int		**im;
	t_sq	sq;
	t_map	map;
	int		j;
	int		i;

	j = 1;
	while (j < argc)
	{
		if (j >= 2 && j < argc)
			write(1, "\n", 1);
		if (ft_kostil(&sq, &map, &j, argv) == -1)
			continue;
		if (ft_kostil2(&im, &j, &map, &sq) == -1)
			continue;
		if ((i = ft_kostil3(im, map, &sq)) == map.q_line)
			ft_print_square(im, sq, map);
		ft_free_im(im, i);
		close(g_fd);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_file_work(argc, argv);
	}
	else
	{
		ft_file_work(2, (void *)0);
	}
	return (0);
}
