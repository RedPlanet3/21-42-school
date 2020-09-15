/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:09:12 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/13 21:15:53 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	razdel(void);
void	pechat(int x, int y, int z);

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x < 8)
	{
		y = x + 1;
		while (y < 10)
		{
			z = y + 1;
			while (z < 10)
			{
				pechat(x, y, z);
				if ((x != 7) || (y != 8) || (z != 9))
				{
					razdel();
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

void	pechat(int x, int y, int z)
{
	char a;
	char b;
	char c;

	a = x + '0';
	b = y + '0';
	c = z + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	razdel(void)
{
	char g;
	char space;

	g = ',';
	space = ' ';
	write(1, &g, 1);
	write(1, &space, 1);
}
