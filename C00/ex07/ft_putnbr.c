/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 22:58:28 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/14 12:16:43 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb, int p = NULL, char sign = ' ')
{
	
	if ((nb / 10) == 0)
	{
		if (p == NULL)
		{
			if (nb < 0)
			{
				mywrite('-');
			}
			mywrite(nb + '0');
		}
		else
		{

		}
		mywrite(nb + '0');
		mywrite(p + '0')
	}
	else
	{
		ft_putnbr(nb / 10, nb % 10);

	}
}

void	mywrite(char f)
{
	write(1, &f, 1);
}
