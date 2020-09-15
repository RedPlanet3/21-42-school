/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 19:24:40 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/18 20:53:46 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mywrite(char g);
int		repeat(char *base, int ch);
void	vivod(char *base, int nbr, int ib);
int		base_prov(char base[], int *ib);

void	ft_putnbr_base(int nbr, char *base)
{
	int ib;
	int a;

	a = 0;
	if (nbr < 0)
	{
		a = 1;
		nbr = nbr * -1;
	}
	ib = 0;
	if (base_prov(base, &ib) == 1)
	{
		if (a == 1)
			mywrite('-');
		vivod(base, nbr, ib);
	}
}

int		repeat(char base[], int ch)
{
	int		i;
	int		k;
	char	arr[ch];

	i = 0;
	arr[i] = *base;
	while (i < ch)
	{
		k = 0;
		i++;
		base++;
		while (k < i)
		{
			if (arr[k] == *base)
				return (0);
			k++;
		}
		arr[i] = *base;
	}
	return (1);
}

void	vivod(char *base, int nbr, int ib)
{
	if (nbr / ib == 0)
		mywrite(base[nbr]);
	else
	{
		vivod(base, nbr / ib, ib);
		vivod(base, nbr % ib, ib);
	}
}

void	mywrite(char g)
{
	write(1, &g, 1);
}

int		base_prov(char base[], int *ib)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] <= ' ' || base[i] > 127)
			return (0);
		else if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	*ib = i;
	if (i < 2)
		return (0);
	else
		return (1);
}
