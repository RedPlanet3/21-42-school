/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:13:40 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/15 23:03:43 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
		while (str[i] != ' ')
		{
			if (str[i] == '\0')
				return (str);
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
			i++;
		}
		i++;
	}
	return (str);
}
