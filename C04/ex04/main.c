#include <stdio.h>
#include <unistd.h>


void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
printf("\n==================== ex04 ====================\n");
		
		char a4[] = "01";
		ft_putnbr_base(-1024, a4);
		printf(" <- -10000000000\n");
		
		char b4[] = "001";
		ft_putnbr_base(-1, b4);
		printf(" <- nothing\n");
		
		char c4[] = "01234567";
		ft_putnbr_base(-6053444, c4);
		printf(" <- -27057104\n");
		
		char d4[] = "1";
		ft_putnbr_base(-123, d4);
		printf(" <- nothing\n");
		
		char e4[0] = "";
		ft_putnbr_base(-123, e4);
		printf(" <- nothing\n");
		
		char f4[] = "-+";
		ft_putnbr_base(-123, f4);
		printf(" <- nothing\n");
		
		char g4[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_?=><abcdefghijklmnopqrstuvwxyz";
		ft_putnbr_base(-214748364, g4);
		printf(" <- -68Tzk\n");
		
		char h4[] = "01";
		ft_putnbr_base(-2147483647, h4);
		printf(" <- -1111111111111111111111111111111\n");
		
		char j4[] = "01";
		ft_putnbr_base(-0, j4);
		printf(" <- 0\n");
}
