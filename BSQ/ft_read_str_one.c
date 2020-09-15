/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_str_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:04:27 by nvictor           #+#    #+#             */
/*   Updated: 2020/09/02 13:39:21 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_str_conc(char *buf_str, int *i)
{
	char	*str;
	int		j;

	if ((str = (char *)malloc(sizeof(char) * (*i + FIRST_ARR + 1)))
			== (void *)0)
	{
		g_errno = 4;
		return ((void *)0);
	}
	buf_str[*i] = '\0';
	j = 0;
	while (buf_str[j])
	{
		str[j] = buf_str[j];
		j++;
	}
	free(buf_str);
	return (str);
}

char	*ft_read_and_conc(char *buf, int *i, char *buf_str, int *rc)
{
	while ((*rc = read(g_fd, buf, 1)) > 0 && *buf != '\n')
	{
		if (*i % FIRST_ARR == 0 && *i)
		{
			if ((buf_str = ft_str_conc(buf_str, i)) == (void *)0)
			{
				g_errno = 4;
				return ((void *)0);
			}
		}
		buf_str[*i] = *buf;
		*i += 1;
	}
	return (buf_str);
}

char	*ft_mem_alloc(int *i, t_map *map)
{
	char	buf;
	int		rc;
	char	*buf_str;

	if (!(buf_str = (char *)malloc(sizeof(char) * (FIRST_ARR + 1))))
	{
		g_errno = 4;
		return ((void *)0);
	}
	*i = 0;
	if ((buf_str = ft_read_and_conc(&buf, i, buf_str, &rc)) == (void *)0)
		return ((void *)0);
	if (rc < 0)
	{
		free(buf_str);
		g_errno = 2;
		return ((void *)0);
	}
	buf_str[*i] = '\0';
	map->len = *i;
	return (buf_str);
}

int		ft_find_square_one(char *buf_str, int *m, t_sq *sq, t_map *map)
{
	int i;

	i = 0;
	while (buf_str[i])
	{
		if ((m[i] = ft_check_char(buf_str[i], *map)) > sq->side)
		{
			sq->side = m[i];
			sq->x = i;
			sq->y = 0;
		}
		if (m[i] < 0)
			return (-1);
		i++;
	}
	m[i] = -2;
	return (0);
}

int		*ft_read_str_one(t_map *map, t_sq *sq)
{
	int		*m;
	char	*buf_str;
	int		i;

	if ((buf_str = ft_mem_alloc(&i, map)) == (void *)0)
		return ((void *)0);
	if ((m = (int *)malloc(sizeof(int) * (i + 1))) == (void *)0)
	{
		g_errno = 4;
		return ((void *)0);
	}
	if (ft_find_square_one(buf_str, m, sq, map) == -1)
		return ((void *)0);
	free(buf_str);
	return (m);
}
