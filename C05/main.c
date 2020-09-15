#include <stdio.h>

int ft_iterative_factorial(int nb);         //ex00
int ft_recursive_factorial(int nb);         //ex01
int ft_iterative_power(int nb, int power);  //ex02
int ft_recursive_power(int nb, int power);  //ex03
int ft_fibonacci(int index);                //ex04
int ft_sqrt(int nb);                        //ex05
int ft_is_prime(int nb);                    //ex06
int ft_find_next_prime(int nb);             //ex07

int main(void)
{
	printf("ex00\n");
	printf("fuct 5 = 120, answ: %d\n", ft_iterative_factorial(5));
	printf("fuct 0 = 1, answ: %d\n", ft_iterative_factorial(0));
	printf("fuct -5 = 0, answ: %d\n", ft_iterative_factorial(-5));
	printf("Perepoln fuct 35 = ?, answ: %d\n", ft_iterative_factorial(35));
	printf("0 -> %d\n", ft_iterative_factorial(-1));
    printf("1 -> %d\n", ft_iterative_factorial(0));
    printf("1 -> %d\n", ft_iterative_factorial(1));
    printf("2 -> %d\n", ft_iterative_factorial(2));
    printf("6 -> %d\n", ft_iterative_factorial(3));
    printf("24 -> %d\n", ft_iterative_factorial(4));
    printf("120 -> %d\n", ft_iterative_factorial(5));
    printf("720 -> %d\n", ft_iterative_factorial(6));
    printf("5040 -> %d\n", ft_iterative_factorial(7));
    printf("40320 -> %d\n", ft_iterative_factorial(8));
    printf("362880 -> %d\n", ft_iterative_factorial(9));
    printf("3628800 -> %d\n", ft_iterative_factorial(10));
    printf("39916800 -> %d\n", ft_iterative_factorial(11));
	
	printf("ex01\n");
    printf("fuct 5 = 120, answ: %d\n", ft_recursive_factorial(5));
    printf("fuct 0 = 1, answ: %d\n", ft_recursive_factorial(0));
    printf("fuct -5 = 0, answ: %d\n", ft_recursive_factorial(-5));
    printf("fuct 35 = 0, answ: %d\n", ft_recursive_factorial(35));
	        printf("0 -> %d\n", ft_recursive_factorial(-1));
        printf("1 -> %d\n", ft_recursive_factorial(0));
        printf("1 -> %d\n", ft_recursive_factorial(1));
        printf("2 -> %d\n", ft_recursive_factorial(2));
        printf("6 -> %d\n", ft_recursive_factorial(3));
        printf("24 -> %d\n", ft_recursive_factorial(4));
        printf("120 -> %d\n", ft_recursive_factorial(5));
        printf("720 -> %d\n", ft_recursive_factorial(6));
        printf("5040 -> %d\n", ft_recursive_factorial(7));
        printf("40320 -> %d\n", ft_recursive_factorial(8));
        printf("362880 -> %d\n", ft_recursive_factorial(9));
        printf("3628800 -> %d\n", ft_recursive_factorial(10));
        printf("39916800 -> %d\n", ft_recursive_factorial(11));
	
	printf("ex02\n");
    printf("0 ** 0 = 1, answ: %d\n", ft_iterative_power(0, 0));
    printf("2 ** 5 = 32, answ: %d\n", ft_iterative_power(2, 5));
    printf("-2 ** 5 = -32, answ: %d\n", ft_iterative_power(-2, 5));
    printf("2 ** -5 = 0, answ: %d\n", ft_iterative_power(2, -5));
	printf("prevish 598 ** 3 = 0, answ: %d\n", ft_iterative_power(598, 4));
	        printf("1024 -> %d\n", ft_iterative_power(2, 10));
        printf("-512 -> %d\n", ft_iterative_power(-2, 9));
        printf("1024 -> %d\n", ft_iterative_power(-2, 10));
        printf("1 -> %d\n", ft_iterative_power(-2147483648, 0));
        printf("1 -> %d\n", ft_iterative_power(2147483647, 0));
        printf("0 -> %d\n", ft_iterative_power(123, -5));
        printf("0 -> %d\n", ft_iterative_power(0, 2147483647));
        printf("1 -> %d\n", ft_iterative_power(1, 2147483647));
        printf("1 -> %d\n", ft_iterative_power(0, 0));

	printf("ex03\n");
	printf("0 ** 0 = 1, answ: %d\n", ft_recursive_power(0, 0));
    printf("2 ** 5 = 32, answ: %d\n", ft_recursive_power(2, 5));
    printf("-2 ** 5 = -32, answ: %d\n", ft_recursive_power(-2, 5));
    printf(" 0 ** 5 =   0, answ: %d\n", ft_recursive_power(0, 5));
 	printf("2 ** -5 =  0, answ: %d\n", ft_iterative_power(2, -5));
//	printf("prevish 598 ** 3 = 0, answ: %d\n", ft_recursive_power(598, 4));
	        printf("1024 -> %d\n", ft_recursive_power(2, 10));
        printf("-512 -> %d\n", ft_recursive_power(-2, 9));
        printf("1024 -> %d\n", ft_recursive_power(-2, 10));
        printf("1 -> %d\n", ft_recursive_power(-2147483648, 0));
        printf("1 -> %d\n", ft_recursive_power(2147483647, 0));
        printf("0 -> %d\n", ft_recursive_power(123, -5));
        printf("0 -> %d\n", ft_recursive_power(0, 2147483647));
        printf("1 -> %d\n", ft_recursive_power(1, 2147483647));

        printf("1 -> %d\n", ft_recursive_power(0, 0));
        printf("1 -> %d\n", ft_recursive_power(1, -1));
        printf("0 -> %d\n", ft_recursive_power(-1, -1));
	
	printf("ex04\n");
	printf("index(0) = 0, answ: %d\n", ft_fibonacci(0));
    printf("index(1) = 1 , answ: %d\n", ft_fibonacci(1));
    printf("index(9) = 34, answ: %d\n", ft_fibonacci(9));
    printf("index(-9) = -1, answ: %d\n", ft_fibonacci(-9));
    //printf("prevish index(56) = 0, answ: %d\n", ft_fibonacci(56));
	        printf("-1 -> %d\n", ft_fibonacci(-1));
        printf("0 -> %d\n", ft_fibonacci(0));
        printf("1 -> %d\n", ft_fibonacci(1));
        printf("1 -> %d\n", ft_fibonacci(2));
        printf("2 -> %d\n", ft_fibonacci(3));
        printf("3 -> %d\n", ft_fibonacci(4));
        printf("6765 -> %d\n", ft_fibonacci(20));
        printf("1836311903 -> %d\n", ft_fibonacci(46));

	printf("ex05\n");
    printf("nb  16  = 4, answ: %d\n", ft_sqrt(16));
    printf("nb -16  = 0, answ: %d\n", ft_sqrt(-16));
    printf("nb   0  = 0, answ: %d\n", ft_sqrt(0));
    printf("nb  17  = 0, answ: %d\n", ft_sqrt(17));
    printf("nb   1  = 1, answ: %d\n", ft_sqrt(1));
	        printf("0 -> %d\n", ft_sqrt(-1));
        printf("0 -> %d\n", ft_sqrt(0));
        printf("1 -> %d\n", ft_sqrt(1));
        printf("0 -> %d\n", ft_sqrt(2));
        printf("0 -> %d\n", ft_sqrt(3));
        printf("2 -> %d\n", ft_sqrt(4));
        printf("0 -> %d\n", ft_sqrt(-1));
        printf("0 -> %d\n", ft_sqrt(-1));
        printf("12345 -> %d\n", ft_sqrt(152399025));
        printf("0 -> %d\n", ft_sqrt(152399026));
        printf("46340 -> %d\n", ft_sqrt(2147395600));
		printf("0 -> %d\n", ft_sqrt(2147483647));

printf("\n==================== ex06 ======================\n");

        printf("0 -> %d\n", ft_is_prime(-5));
        printf("0 -> %d\n", ft_is_prime(0));
        printf("0 -> %d\n", ft_is_prime(1));
        printf("1 -> %d\n", ft_is_prime(2));
        printf("1 -> %d\n", ft_is_prime(3));
        printf("0 -> %d\n", ft_is_prime(4));
        printf("1 -> %d\n", ft_is_prime(5));
        printf("1 -> %d\n", ft_is_prime(80167));
        printf("0 -> %d\n", ft_is_prime(166538989));
        printf("1 -> %d\n", ft_is_prime(2147483629));
        printf("1 -> %d\n", ft_is_prime(2147483647));

printf("\n==================== ex07 ======================\n");

        printf("2 -> %d\n", ft_find_next_prime(-1));
        printf("2 -> %d\n", ft_find_next_prime(0));
        printf("2 -> %d\n", ft_find_next_prime(1));
        printf("2 -> %d\n", ft_find_next_prime(2));
        printf("3 -> %d\n", ft_find_next_prime(3));
        printf("5 -> %d\n", ft_find_next_prime(4));
        printf("5 -> %d\n", ft_find_next_prime(5));
        printf("80167 -> %d\n", ft_find_next_prime(80167));
        printf("166538993 -> %d\n", ft_find_next_prime(166538989));
        printf("2147483629 -> %d\n", ft_find_next_prime(2147483629));
        printf("2147483647 -> %d\n", ft_find_next_prime(2147483647));

}
