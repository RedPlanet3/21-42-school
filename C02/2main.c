/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlucanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:38:53 by tlucanti          #+#    #+#             */
/*   Updated: 2020/08/16 14:21:37 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_strcpy.c"
// #include "ex01/ft_strncpy.c"
// #include "ex02/ft_str_is_alpha.c"
// #include "ex03/ft_str_is_numeric.c"
// #include "ex04/ft_str_is_lowercase.c"
// #include "ex05/ft_str_is_uppercase.c"
// #include "ex06/ft_str_is_printable.c"
// #include "ex07/ft_strupcase.c"
// #include "ex08/ft_strlowcase.c"
// #include "ex09/ft_strcapitalize.c"

#include <stdio.h>

int main () {
		//ex00

/*	 printf("----------------ex00----------------");
	   {
  	   char *ft_strcpy(char *dest, char *src);


		char a0[] = "abc\0";
		char b0[4];
		printf("%s -> %s", a0, ft_strcpy(b0, a0));
		}


	
 		//ex01

	 printf("----------------ex01----------------\n");
	*/ 	char *ft_strncpy(char *dest, char *src, unsigned int n);

		char a1[] = "abcdef\0";
		char b1[9];
		printf("%s", ft_strncpy(b1, a1, 3));
/*

	  	//ex02

	 printf("----------------ex02----------------");	 
	  	int ft_str_is_alpha(char *str);

		printf("empty %d \n", ft_str_is_alpha(""));
		char a2[2] = {0};
		for (int  i=1; i<128; i++) {
			a2[0] = i;
			printf("%d - %c: %d\n", i, *a2, ft_str_is_alpha(a2));
		}
		printf("\n");


	 //ex03

	 printf("----------------ex03----------------");

	 int ft_str_is_numeric(char *str);
	 
		printf("%d %d\n", ft_str_is_numeric("0123456789\0"), ft_str_is_numeric("\0"));
		char a3[2] = {0};
		for (int  i=1; i<128; i++) {
			a3[0] = i;
			printf("%d - %c: %d\n", i, *a3, ft_str_is_numeric(a3));
		}
		printf("\n");
*/
	 //ex04
/*
	 printf("----------------ex04-------------");
	  int ft_str_is_lowercase(char *str);
	 

		printf("%d %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"), ft_str_is_lowercase("\0"));
		char a4[1] = {0};
		for (int i=1; i<128; i++) {
			a4[0] = i;
			printf("%d-%c: %d\n", i, a4[0], ft_str_is_lowercase(a4));
		}
		printf("\n");

	// ex05
	 printf("----------------ex05-------------");
 
	int ft_str_is_uppercase(char *str);

		printf("%d \n", ft_str_is_uppercase(""));
		char a5[1] = {0};
		for (int i=1; i<128; i++) {
			a5[0] = i;
			printf("%d-%c: %d\n", i, a5[0], ft_str_is_uppercase(a5));
		}
		printf("\n");

	// ex06

	 printf("----------------ex06-------------");
	 
 		int ft_str_is_printable(char *str);
	 

		printf("%d %d\n", ft_str_is_printable(" ~"), ft_str_is_printable("\0"));
		char a6[1] = {0};
		for (int i=1; i<128; i++) {
			a6[0] = i;
			printf("%d-%c: %d\n", i, a6[0], ft_str_is_printable(a6));
		}
		printf("\n");
		printf("%c", 127);


	// ex07

	 printf("----------------ex07-------------");
	char *ft_strupcase(char *str);		
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

		printf("%s\n", ft_strupcase(str));
		char a7[1] = {0};
		for (int i=0; i<128; i++) {
			a7[0] = i;
			printf("%d-%c: %s\n", i, a7[0], ft_strupcase(a7));
		}
		printf("\n");

	 // ex08

	 printf("----------------ex08-------------");  

	 char *ft_strlowcase(char *str);
	
    char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        printf("%s\n", ft_strlowcase(str));

		char a8[1] = {0};
		for (int i=1; i<128; i++) {
			a8[0] = i;
			printf("%d-%c: %s\n", i, a8[0], ft_strlowcase(a8));
		}
		printf("\n");

	// ex09
	 printf("----------------ex08-------------");
	 
  	char *ft_strcapitalize(char *str);
    char str[] ="sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	 

	printf("%s\n", ft_strcapitalize(str));

	




norminette -R CheckForbiddenSourceHeader ex00/ft_strcpy.c
norminette -R CheckForbiddenSourceHeader ex01/ft_strncpy.c
norminette -R CheckForbiddenSourceHeader ex02/ft_str_is_alpha.c
norminette -R CheckForbiddenSourceHeader ex03/ft_str_is_numeric.c
norminette -R CheckForbiddenSourceHeader ex04/ft_str_is_lowercase.c
norminette -R CheckForbiddenSourceHeader ex05/ft_str_is_uppercase.c
norminette -R CheckForbiddenSourceHeader ex06/ft_str_is_printable.c
norminette -R CheckForbiddenSourceHeader ex07/ft_strupcase.c
norminette -R CheckForbiddenSourceHeader ex08/ft_strlowcase.c
norminette -R CheckForbiddenSourceHeader ex09/ft_strcapitalize.c

*/
}
