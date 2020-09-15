/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 22:57:33 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/15 11:16:41 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int arr[size];
	int i;

	i = 0;
	size--;
	while (size > -1)
	{
		arr[i] = *(tab + size);
		i++;
		size--;
	}
	size = i;
	i = 0;
	while (i < size)
	{
		*(tab+i) = arr[i];
		i++;
	}
}
