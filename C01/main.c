#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);
/*int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_ultimate_div_mod(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_swap(int *a, int *b);
void    ft_ultimate_ft(int *********nbr);
*/
int main(void)
{
	int tab[5] = {1,2,3,4,5};

	ft_rev_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
		printf("%d", tab[i]);
}
