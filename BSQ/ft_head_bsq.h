/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head_bsq.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 20:27:18 by hashly            #+#    #+#             */
/*   Updated: 2020/09/02 12:53:11 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_BSQ_H
# define FT_HEAD_BSQ_H
# define ZERO_ARR 25
# define FIRST_ARR 10000

int	g_errno;
int	g_fd;

typedef	struct	s_map
{
	int			q_line;
	int			len;
	char		empty;
	char		obs;
	char		full;
}				t_map;

typedef	struct	s_square
{
	int			x;
	int			y;
	int			side;
}				t_sq;

t_map			ft_read_str_zero(void);
int				*ft_read_str_one(t_map *map, t_sq *sq);
int				*ft_read_str(t_map map, t_sq *sq, int *im_pred, int i);
void			ft_print_square(int **im, t_sq sq, t_map map);
char			*ft_str_error(int errnum);
void			ft_putstr(char *str);
int				ft_str_is_printable(char str);
int				ft_str_is_numeric(char *str);
int				ft_check_char(char buf, t_map map);
int				ft_not_square(t_sq sq, int x, int y);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			ft_check_square(t_sq *sq, int i, int j, int a);
void			ft_write_error(int num);
void			ft_free_im(int **im, int j);
t_sq			ft_defoult_square(void);

#endif
