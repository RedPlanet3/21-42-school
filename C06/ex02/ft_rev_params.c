/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:51:47 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/20 22:58:12 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	(void)argv;
	i = argc - 1;
	while (i > 0)
	{
		putchr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
