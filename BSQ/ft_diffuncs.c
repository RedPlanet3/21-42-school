/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diffuncs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:08:07 by nvictor           #+#    #+#             */
/*   Updated: 2020/09/01 19:01:29 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head_bsq.h"
#include <unistd.h>

int		ft_str_is_printable(char str)
{
	if (str < 32 || str > 127)
		return (0);
	else
		return (1);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('0' > str[i] || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int num;

	num = 0;
	while (*str)
	{
		num = (*str - 48) + 10 * num;
		str++;
	}
	return (num);
}

int		ft_not_square(t_sq sq, int x, int y)
{
	if ((x >= sq.x) && (x <= (sq.x + sq.side - 1)))
	{
		if ((y >= sq.y) && (y <= (sq.y + sq.side - 1)))
			return (0);
	}
	return (1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
