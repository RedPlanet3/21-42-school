/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 19:57:54 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/16 20:31:18 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int sovp;
	int vrem;

	i = 0;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			sovp = 1;
			while(*to_find != '\0')
			{
				if (*str == *to_find)
				{
					to_find++;
					str++;
					i++;
					sovp++;
				}
				else
				{
					vrem = 0;
					while (vrem < sovp)
					{
						to_find--;
						vrem++;
					}
					sovp = 0;
				}
				vrem = 0;
				while (vrem < sovp)
				{
					str--;
					vrem++;
				}
				return (*str);
			}
		}
	}
	return (NULL);
}
