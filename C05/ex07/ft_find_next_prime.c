/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:23:04 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/19 20:53:44 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (is_prime(nb) != 1)
		nb = nb + 1;
	return (nb);
}
