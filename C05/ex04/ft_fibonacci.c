/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 12:35:08 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/19 17:43:47 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
