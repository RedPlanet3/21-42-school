/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:57:50 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/20 21:06:37 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchr(char *argv);

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	(void)argv;
	i = 1;
	while (i < argc)
	{
		putchr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
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
