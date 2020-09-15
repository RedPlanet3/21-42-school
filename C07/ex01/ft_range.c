/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 20:53:17 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/21 22:24:17 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
		return (p - z);
	}
	p = 0;
	return (p);
}
