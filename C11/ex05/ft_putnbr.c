/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:14:41 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/17 17:41:00 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	minus(int *nb);

void	ft_putnbr(int nb)
{
	char k;

	minus(&nb);
	if ((nb / 10) == 0)
	{
		k = nb + '0';
		write(1, &k, 1);
	}
	else
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
}

void	minus(int *nb)
{
	char c;

	if (*nb < 0)
	{
		if (*nb == -2147483648)
		{
			c = '-';
			write(1, &c, 1);
			c = '2';
			write(1, &c, 1);
			*nb = 147483648;
		}
		else
		{
			c = '-';
			*nb = *nb * -1;
			write(1, &c, 1);
		}
	}
}
