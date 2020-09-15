#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "122";
	char dest[4];
	
	printf("%s -> %s", src, ft_strcpy(dest, src));
}
