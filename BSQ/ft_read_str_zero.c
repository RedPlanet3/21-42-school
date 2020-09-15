/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_str_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 17:20:48 by nvictor           #+#    #+#             */
/*   Updated: 2020/09/01 18:58:21 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_srav(t_map p)
{
	if ((p.empty != p.obs) && (p.empty != p.full))
	{
		if (p.obs != p.full)
			return (1);
	}
	return (0);
}

t_map	ft_error_check(t_map *p, int no)
{
	g_errno = no;
	p->q_line = -1;
	return (*p);
}

int		ft_rstr(char *buf, t_map *p, int *i, char c)
{
	while (c != '\n')
	{
		if (read(g_fd, &c, 1) > 0)
		{
			if (c != '\n')
			{
				if (ft_str_is_printable(c))
					buf[*i] = c;
				else
				{
					*p = ft_error_check(p, 3);
					return (-1);
				}
				*i += 1;
			}
		}
		else
		{
			*p = ft_error_check(p, 2);
			return (-1);
		}
	}
	return (0);
}

int		ft_set_value(t_map *p, char *buf, int i)
{
	p->empty = buf[i - 3];
	p->obs = buf[i - 2];
	p->full = buf[i - 1];
	if (ft_srav(*p) == 0)
		return (-1);
	buf[i - 3] = '\0';
	if (ft_str_is_numeric(buf))
	{
		p->q_line = ft_atoi(buf);
		if (p->q_line <= 0)
			return (-1);
	}
	else
		return (-1);
	return (0);
}

t_map	ft_read_str_zero(void)
{
	int		i;
	char	*buf;
	t_map	p;

	i = 0;
	buf = (char *)malloc(sizeof(char) * ZERO_ARR);
	if (buf == (void *)0)
		return (ft_error_check(&p, 4));
	else
	{
		if (ft_rstr(buf, &p, &i, '\0') == -1)
			return (p);
		if (ft_set_value(&p, buf, i) == -1)
			return (ft_error_check(&p, 3));
		free(buf);
	}
	return (p);
}
