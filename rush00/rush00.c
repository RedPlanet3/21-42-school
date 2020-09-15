/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:43:58 by jnite             #+#    #+#             */
/*   Updated: 2020/08/16 17:57:58 by jnite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fl_line(int x, char c1, char c2)
{
	int i;

	i = 0;
	if (x == 1)
	{
		ft_putchar(c1);
	}
	else
	{
		ft_putchar(c1);
		while (i < x - 2)
		{
			ft_putchar(c2);
			i++;
		}
		ft_putchar(c1);
	}
	ft_putchar('\n');
}

void	rush_out(int x, int y)
{
	int i;

	i = 0;
	if (y == 1)
	{
		fl_line(x, 'o', '-');
	}
	else
	{
		fl_line(x, 'o', '-');
		while (i < y - 2)
		{
			fl_line(x, '|', ' ');
			i++;
		}
		fl_line(x, 'o', '-');
	}
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
		rush_out(x, y);
}
