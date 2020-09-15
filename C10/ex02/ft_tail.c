/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 20:22:24 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/25 23:45:29 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "ft_head.h"

void elsearr(char **arr, int byte, int res)
{
	arr = (char**)malloc(ch * sizeof(char*));
	arr[0] = (char*)malloc((byte) * sizeof(char));
	j = 0;
	while (j < res - byte + 1)
	{
		arr[0][j] = *(buffer + res - byte + j);
		 j++;
	}
}


void	printarr(char **arr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ch)
	{
		while (j <= byte)
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	malocsize(int res, int byte, char **arr, int ch)
{
	int		i;
	int		j;
	char	**a;
	char	**p;

	a = (char**)malloc(ch * sizeof(char*));
	i = 0;
	while (i < ch)
	{
		a[i] = arr[i];
		i++;
	}
	a[i + 1] = (char*)malloc((byte) * sizeof(char));
	i = 0;
	while (j < res - byte + 1)
	{
		a[i + 1][j] = *(buffer + res - byte + j);
		j++;
	}
	p = arr;
	a = arr;
	a = p;
	free(a);
}

void	readwrite(int byte)
{
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		res;
	int			ch;
	int			i;
	int			j;
    char		**arr;

	ch = 0;
	while ((res = read(0, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[res] = 0;
		ch++;
		if (ch != 1)
			malocsize(res, byte, arr);	
		else
		{
			elsearr(arr, byte, res);
		}
	}
	printarr(arr);
}

void	argvread(char *param, char *fname, int byte, int t)
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
			if (t)
				printhead(param);
			if ((res - byte) > 0)
				ft_putstr(buffer + (res - byte), 0);
			else
				ft_putstr(buffer, 0);
		}
		errorview(errno, fname, param);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	int		i;
	int		byte;

	i = 3;
	if (argc < 3)
	{
		ft_putstr("tail: option requires an argument -- c", 1);
		ft_putstr("usage: tail [-F | -f | -r] [-q]", 0);
		ft_putstr("[-b # | -c # | -n #] [file ...]", 1);
	}
	else 
	{
		byte = ft_atoi(argv[2]);
		if (argc == 3)
			readwrite(byte);
		else if (argc == 4)
			argvread(argv[i], argv[0], byte, 0);
		else
		{
			while (i < argc)
			{
				argvread(argv[i], argv[0], byte, 1);
				i++;
				if ((i + 1) <= argc)
					ft_putstr("", 1);
			}
		}
	}
	return (0);
}

void printhead(char *fname)
{
	ft_putstr("==>", 0);
	ft_putstr(fname, 0);
	ft_putstr(" <==", 1);
}
