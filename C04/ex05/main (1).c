#include <stdio.h>
#include <unistd.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	printf("\n==================== ex05 ====================\n");
	char a5[] = "01";
	char a51[] = "     -----1024werewr";
	printf("%d", ft_atoi_base(a51, a5));
	printf(" <- -2\n");

	char b5[] = "01";
	char b51[] = "     -+-+-+-+-+-+-+-+-+-1";
	printf("%d", ft_atoi_base(b51, b5));
	printf(" <- 1\n");

	char c5[] = "Helo	wrd!";
	char c51[] = "6053444";
	printf("%d", ft_atoi_base(c51, c5));
	printf(" <- zero\n");

	char d5[] = "1";
	char d51[] = "  +123";
	printf("%d", ft_atoi_base(d51, d5));
	printf(" <- zero\n");

	char e5[0] = "";
	char e51[] = "  +123";
	printf("%d", ft_atoi_base(e51, e5));
	printf(" <- zero\n");

	char f5[] = "-+";
	char f51[] = "  +123";
	printf("%d", ft_atoi_base(f51, f5));
	printf(" <- zero\n");

	char g5[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_?=><abcdefghijklmnopqrstuvwxyz";
	char g51[] = "   --+-+--90003{ k0 +se+s e___grsg['=r-gs-gr+4grs8srg&sr863w9 sgr80\0";
	printf("%d", ft_atoi_base(g51, g5));
	printf(" <- -316377372\n");

	char h5[] = "012";
	char h51[] = "-2147483648";
	printf("%d", ft_atoi_base(h51, h5));
	printf(" <- -7\n");

	char i5[] = "01";
	char i51[] = "       ----++--0";
	printf("%d", ft_atoi_base(i51, i5));
	printf(" <- 0\n");

	char j5[] = "   ---+--+1234ab567";
	char j51[] = "0123456789";
	printf("%d", ft_atoi_base(j51, j5));
	printf(" <- 0\n");

	char k5[] = "   ---+ks +se-s e___grsg['=r-gs-gr+4grs8srg&sr863w9 sgr80";
	char k51[] = "0123456789";
	printf("%d", ft_atoi_base(k51, k5));
	printf(" <- 0\n");

	char l5[1] = "\0";
	char l51[] = "0123456789";
	printf("%d", ft_atoi_base(l51, l5));
	printf(" <- 0\n");

	char m5[] = "    +-+-+-+-+-";
	char m51[] = "0123456789";
	printf("%d", ft_atoi_base(m51, m5));
	printf(" <- 0\n");

	char n5[] = "     ";
	char n51[] = "0123456789";
	printf("%d", ft_atoi_base(n51, n5));
	printf(" <- 0\n");

	char o5[] = "2147836";
	char o51[] = "--++-+--221234 56789";
	printf("%d", ft_atoi_base(o51, o5));
	printf(" <- -380\n");

	char gg5[] = "0123456789abcdef";
	char gg51[] = "  - - -+ +- -ffe5748 ff";
	printf("%d", ft_atoi_base(gg51, gg5));
	printf(" <- -268326728\n");
}
