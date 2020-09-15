/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 19:25:03 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/26 19:25:16 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ZNAK(s) (s < 0) ? ARR > 0 : ARR < 0
#define ARR f(tab[i], tab[i + 1])

int	sortcheck(int *tab, int s, int leng, int (*f)(int, int));

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort;
	int s;

	i = 0;
	sort = 0;
	if (length == 1)
		return (1);
	else if (length == 0)
		return (0);
	while (f(tab[i], tab[i + 1]) == 0 && i < (length - 1))
		i++;
	if (f(tab[i], tab[i + 1]) > 0)
		s = 1;
	else if (f(tab[i], tab[i + 1]) < 0)
		s = -1;
	else
		return (1);
	while (i < length - 1)
	{
		if (ZNAK(s))
			return (0);
		i++;
	}
	return (1);
}
