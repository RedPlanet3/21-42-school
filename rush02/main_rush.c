/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 15:45:01 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/29 15:46:52 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]))
			filling("numbers.dict", argv[1]);
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	else if (argc == 3)
	{
		if (ft_str_is_numeric(argv[2]))
			filling(argv[1], argv[2]);
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	return (0);
}

void	filling(char *numdict, char *h)
{
	t_dict	*dictnum;
	char	*buf;
	if (ft_checklen(h, numdict))
	{
		buf = set_buf(numdict);
		dictnum = set_struct(buf, 0, 0);
		ft_thousand(h, 0, ft_strlen(h), dictnum);
		ft_putstr("\n");
	}
	else
		ft_putstr("Error Dict\n");	
}

int		ft_checklen(char *key, t_dict *dictnum)
{
	int maxdictlen;

	maxdictlen = 0;
	while (dictnum)
	{
		if (ft_strlen(dictnum->key) > maxdictlen)
			maxdictlen = ft_strlen(dictnum->key);
		dictnum = dictnum->next;
	}
	if (ft_strlen(key) - maxdictlen <= 2)
		return (1);
	else
		return (0);
}
