/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 22:42:13 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/19 14:56:30 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 1 || nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
