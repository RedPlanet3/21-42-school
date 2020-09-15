/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 22:28:20 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/21 23:03:56 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *p;
	int z;

	if (max > min)
	{
		z = max - min;
		p = malloc(sizeof(int) * z);
		while (min < max)
		{
			*p = min;
			p++;
			min++;
		}
		*range = p;
		return (*p);
	}
	p = 0;
	return (*p);
}
