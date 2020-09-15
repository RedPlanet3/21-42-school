/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 19:14:04 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/26 19:14:07 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int ch;
	int i;

	ch = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			ch++;
		i++;
	}
	return (ch);
}