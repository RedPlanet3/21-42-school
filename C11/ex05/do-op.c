/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 22:30:35 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/26 22:30:40 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		athop(char **argv, int (*f)(char*));
int		operathor(char *c);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		mathop(char **argv, int (*f)(char*), int f2(char*));
int		arifm(int a, int b, int cl);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int y;

	if (argc == 4)
	{
		y = mathop(argv, &operathor, &ft_atoi);
		if (y == 0)
			ft_putnbr(0);
		else
			ft_putnbr(y);
	}
	return (0);
}

int		mathop(char **argv, int (*f)(char*), int f2(char*))
{
	int a;
	int b;
	int fun;

	a = f2(argv[1]);
	b = f2(argv[3]);
	fun = f(argv[2]);
	if (fun != 0)
		return(arifm(a, b, fun));
	return (0);
}

int		operathor(char *c)
{
	int		i;
	char	arr[5];

	arr[0] = '+';
	arr[1] = '-';
	arr[2] = '*';
	arr[3] = '/';
	arr[4] = '%';
	i = 0;
	while (c[i])
		i++;
	i = 0;
	if (i == 1)
	{
		while (i < 5)
		{
			if (arr[i] == c[0])
				return (i + 1);
			i++;
		}
	}
	return (0);
}

int		arifm(int a, int b, int fun)
{
	if (fun == 1)
		return (a + b);
	else if (fun == 2)
		return (a - b);
	else if (fun == 3)
		return (a * b);
	else if (fun == 4)
		if (b != 0)
			return (a / b);
		else
			ft_putstr("Stop : division by zero");
	else
	{
		if (b != 0)
			return (a % b);
		else
			ft_putstr("Stop : modulo by zero");
	}
	return (0);
}
