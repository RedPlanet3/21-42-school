/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:52:05 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/25 19:01:28 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H
# define BUFFER_SIZE  30000
# define TERMS (!ft_strcmp(argv[i], "--") && argc == 2)

void	readwrite(void);
void	mistakes(int a);
void	errorview(int i, char *pr, char *dir);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str, int y);
void	argvread(char *param, char *fname);

#endif
