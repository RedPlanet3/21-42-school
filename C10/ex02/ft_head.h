/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:12:52 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/25 22:19:22 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H
# define BUFFER_SIZE  30000

void    readwrite(int byte);
void    argvread(char *param, char *fname, int byte, int t);
int     main(int argc, char **argv);
void	printhead(char *fname);
void	ft_putstr(char *str, int y);
void	errorview(int i, char *pr, char *dir);
void    ft_putchar(char c);
int     ft_atoi(char *str);
void    malocsize(int res, int byte, char **arr, int ch);
void    printarr(char **arr);
void    elsearr(char **arr, int byte, int res);


#endif
