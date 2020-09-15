/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 19:44:40 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/21 22:36:18 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		c;

	i = 0;
	while (src[i])
	{
		i++;
	}
	p = malloc(i + 1);
	c = i;
	while (i > 0)
	{
		*p = *src;
		p++;
		src++;
		i--;
	}
	*p = '\0';
	return (p - c);
}
