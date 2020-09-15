/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 16:19:03 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/26 16:19:06 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *p;

	p = (int*)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}
