/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 15:48:35 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/29 15:48:39 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int		ft_atoi_rush(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i])
	{
		num = (str[i] - 48) + 10 * num;
		str++;
	}
	return (num);
}

void ft_condition(char *buf, char *key, char *value, int k, int v)
{
	int		flag;
	int		flag2;
	flag = 0;
	flag2 = 0;
	while (buf[i] != '\n')
	{
		if ((is_numb(buf[i]) == 1) && (flag == 0))
			key[k++] = buf[i];
		else if (buf[i] == ':')
			flag = 1;
		else if (is_printable(buf[i]))
		{
			value[v++] = buf[i];
			flag2 = 1;
		}
		else if (buf[i] == ' ' && flag2 == 1)
		{
			value[v++] = buf[i];
			flag2 = 0;
		}
		i++;
	}
	key[k] = '\0';
	if (value[v - 1] == ' ')
		value[v - 1] = '\0';
	else
		value[v] = '\0';
}
