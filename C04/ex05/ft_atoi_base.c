/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:01:57 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/18 21:10:36 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char c, char *base);
int	base_prov(char base[], int *ib);
int	indexi(char *base, char c);

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int ib;
	int num;
	int min;

	i = 0;
	ib = 0;
	num = 0;
	min = 1;
	if (base_prov(base, &ib) == 1)
	{
		while (check_char(str[i], base) == 0)
		{
			if (str[i] == 45)
				min = min * -1;
			i++;
		}
		while (check_char(str[i], base) != 0)
		{
			num = num * ib + indexi(base, str[i]);
			i++;
		}
	}
	return (num * min);
}

int	base_prov(char base[], int *ib)
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

int	check_char(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	indexi(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}
