/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:05:45 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/15 23:27:30 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;

	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*d++ = *s++) == '\0')
				break;
		}
	}
	if (n == 0) 
	{
		if (siz != 0)
			*d = '\0';
		while (*s++);
	}
	return(s - src - 1);
}
