/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 19:46:06 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/16 20:54:49 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;

	if (nb != 0)
	{
		i = 1;
		while (*dest != '\0')
			dest++;
		while (*src != '\0' || i == nb)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		while (i < nb + 1)
		{
			*dest = '\0';
			i++;
			dest++;
		}
	}
	return (dest);
}
