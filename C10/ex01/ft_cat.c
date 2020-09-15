/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:10:21 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/25 19:24:01 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "ft_head.h"

void	readwrite(void)
{
	char	buf[BUFFER_SIZE + 1];
	ssize_t	res;

	while ((res = read(0, buf, BUFFER_SIZE)) > 0)
	{
		buf[res] = 0;
		ft_putstr(buf, 0);
	}
}

void	argvread(char *param, char *fname)
{
	int		fd;
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	res;
	int		errno;

	fd = open(param, O_RDONLY);
	errorview(errno, fname, param);
	if (!errno)
	{
		while ((res = read(fd, buffer, BUFFER_SIZE)) > 0)
		{
			buffer[res] = 0;
			ft_putstr(buffer, 0);
		}
		errorview(errno, fname, param);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
		readwrite();
	else
	{
		while (i < argc)
		{
			if (!ft_strcmp(argv[i], "-") || TERMS)
				readwrite();
			else if (ft_strcmp(argv[i], "--"))
			{
				argvread(argv[i], argv[0]);
			}
			i++;
		}
	}
	return (0);
}
