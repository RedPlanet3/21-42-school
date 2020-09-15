/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 20:55:30 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/20 00:02:08 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ten_queens_puzzle(void)
{
	char arr[5];
	unsigned int i;
	unsigned int j;
	int vozm;

	i = 0;
	j = 0;
	vozm = 0;
	if (arr[4])
	{
		write(1,&,1);
		return(1);
	}
	else
	{
		while(i < 5)
		{
			while(j < 5)
			{
				if (i != j && (i - j) > 1)
				{
					arr[i] = j;
					vozm = vozm +ft_ten_queens_puzzle();
				}
				return(vozm)
				j++;
			}
			i++;
		}
		return(vozm);
	}
}

