/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 22:58:16 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/19 17:42:45 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = 1;
	while (power-- > 0)
	{
		res = res * nb;
	}
	return (res);
}
