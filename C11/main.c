#include "ft_head.h"
#include <stdio.h>

int	main(void)
{
	int tab[1337];
	int i;

	i = 0;
	while (i < 1337)
	{
		tab[i] = i;
		i++;
	}
	printf("------ex00-------");
	ft_foreach(tab, 1337, &ft_putnbr);
	return (0);

	printf("------ex01-------");
	int *ft_map(int *tab, int length, int(*f)(int));

	printf("------ex02-------");
int ft_any(char **tab, int(*f)(char*));
	
}
