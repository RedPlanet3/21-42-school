/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funkerror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:24:38 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/25 19:26:13 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libgen.h>
#include <string.h>

void	ft_putstr(char *str, int y)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	if (y)
		write(1, "\n", 1);
}

void	mistakes(int a)
{
	if (a < 2)
		ft_putstr("File name missing.", 1);
	else if (a > 2)
		ft_putstr("Too many arguments.", 1);
}

void	errorview(int i, char *pr, char *dir)
{
	if (i)
	{
		ft_putstr(basename(pr), 0);
		ft_putstr(": ", 0);
		ft_putstr(dir, 0);
		ft_putstr(": ", 0);
		ft_putstr(strerror(i), 1);
	}
}
