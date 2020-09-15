/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 21:32:49 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/13 22:55:37 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	doublecheck(int i);
void	mywrite(char f);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			if (i != j)
			{
				doublecheck(i);
				mywrite(' ');
				doublecheck(j);
			}
			if (i != 98 || j != 99)
			{
				mywrite(',');
				mywrite(' ');
			}
			j++;
		}
		i++;
	}
}

void	doublecheck(int i)
{
	char h;
	char num;

	if (i < 10)
	{
		h = '0';
		num = i + '0';
	}
	else
	{
		h = i / 10 + '0';
		num = i % 10 + '0';
	}
	mywrite(h);
	mywrite(num);
}

void	mywrite(char f)
{
	write(1, &f, 1);
}
