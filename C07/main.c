#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);
int *ft_range(int min, int max);

int main(void)
{
	printf("ex00\n");
	printf("%s\n", strdup(""));
	printf("%s\n", ft_strdup(""));
/*
	printf("ex01\n");
    printf("%d\n", *ft_range(0,0 ));
  */ // printf("%s\n", ft_strdup("123"));
}
