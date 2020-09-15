/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:07:06 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/25 20:20:49 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#	define BUFFER_SIZE	30000

void	mistakes(int a);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	res;

	if (argc != 2)
		mistakes(argc);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			while ((res = read(fd, buffer, BUFFER_SIZE)) > 0)
			{
				buffer[res] = 0;
				ft_putstr(buffer);
			}
			if (res < 0)
				ft_putstr("Cannot read file.");
			close(fd);
		}
		else
			ft_putstr("Cannot read file.");
	}
	return (0);
}

void	mistakes(int a)
{
	if (a < 2)
		ft_putstr("File name missing.");
	else if (a > 2)
		ft_putstr("Too many arguments.");
}
