/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 09:47:55 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/18 19:03:06 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//int ft_strlen(char *str);
//void ft_putstr(char *s);
//void ft_putnbr(int nb);
//int ft_atoi(char *str);
//void ft_putnbr_base(int nbr, char *base);
int ft_atoi_base(char *str, char *base);

int main(void)
{
	//ex00
	//char a[]="";
	//
	//printf("Norm %lu\n", strlen(a));
	//printf("%d", ft_strlen(a));
	//
	//ex01
	//char a[]="ert";
	//printf("Norm %s\n", putstr(a));
	//ft_putstr(a);
	//
	//ex02
	//int i = 56;
	//ft_putnbr(i);
	//
	//ex03
	//printf("%d", ft_atoi(" ---+--+1234ab567"));
	//
	//ex04
	//ft_putnbr_base(56, "01234567");
	//printf(" = 70\n");
    //
	//ft_putnbr_base(56, "abcdefjh");
	//printf(" = ha\n");

	//ft_putnbr_base(56, "01");
    //printf(" = 111000\n");

    //ft_putnbr_base(56, "a");
    //printf(" = NULL\n");

	//ft_putnbr_base(56, "a+o");
    //printf(" = NULL\n");

    //ft_putnbr_base(56, "()/*=");
    //printf(" = /))\n");

    //ft_putnbr_base(56, "01");
    //printf(" = -111000\n");
	//
	//ex05
	printf("%d", ft_atoi_base("   /-==+-3456", "12345"));

}
