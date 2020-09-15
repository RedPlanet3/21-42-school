#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
//char *ft_strstr(char *str, char *to_find);
//char    *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	//char a[30] = "42666789";
	//char b[] = "666";
		
	//printf("natural %s\n", strncat(a,b, 10));

	printf(" s1 > s2 = %d\n", ft_strcmp("aaa", "aa"));
	printf(" s1 < s2 = %d\n", ft_strcmp("aa", "baa"));
	printf(" s1 = s2 = %d\n", ft_strcmp("aaa", "aaa"));
	printf(" aaa = + = %d\n", ft_strcmp("aaa", "+"));
	printf(" aaa = + = %d\n", ft_strcmp("+", "rrr"));

}
