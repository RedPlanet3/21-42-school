/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:04:13 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/20 22:33:35 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mysort(char **argv, int size);
int		ft_strcmp(char *s1, char *s2);
void	putchr(char *argv);

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	(void)argv;
	i = 1;
	j = 0;
	mysort(argv, argc);
	while (i < argc)
	{
		putchr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

void	mysort(char **argv, int size)
{
	int		j;
	int		i;
	char	*zam;

	i = 1;
	while (i < size - 1)
	{
		j = 2;
		while (j < size + 1 - i)
		{
			if ((ft_strcmp(argv[j - 1], argv[j])) > 0)
			{
				zam = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = zam;
			}
			j++;
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	putchr(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
}
