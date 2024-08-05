#include "main.h"

/**
 * main - checking the code
 * Return: 0, successful completion
 */



int main(void)
{
	int n;

	n = is_prime_number(1);
	printf("%d\n", n);
	n = is_prime_number(1024);
	printf("%d\n", n);
	n = is_prime_number(16);
	printf("%d\n", n);
	n = is_prime_number(17);
	printf("%d\n", n);
	n = is_prime_number(25);
	printf("%d\n", n);
	n = is_prime_number(-1);
	printf("%d\n", n);
	n = is_prime_number(113);
	printf("%d\n", n);
	n = is_prime_number(7919);
	printf("%d\n", n);
	return (0);
}
