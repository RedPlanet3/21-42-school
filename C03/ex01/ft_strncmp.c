/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 19:02:49 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/16 19:45:37 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 1;
	if (n != 0)
	{
		while (*s1 == *s2)
		{
			if (*s2 == '\0' || i == n)
				return (0);
			s1++;
			s2++;
			i++;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	else
		return (0);
}
