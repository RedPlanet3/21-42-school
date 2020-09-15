/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 11:54:35 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/19 19:52:17 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb != 0 && power == 0) || nb == 1 || power == 0)
		return (1);
	if (power < 1 || nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
