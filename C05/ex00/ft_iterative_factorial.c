/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 22:07:59 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/19 14:55:49 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fuct;
	int i;

	i = 1;
	fuct = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			fuct = fuct * i;
			i++;
		}
		return (fuct);
	}
	return (0);
}
