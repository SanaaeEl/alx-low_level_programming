#include "main.h"


/**
 * is_prime_number_recur - checks if n is prime number
 * @n: the number in question
 * @dv: divisor of the number in question
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */


int is_prime_number_recur(int n, int dv)
{
	if (n < 2)
		return (0);
	if (n % dv == 0)
		return (0);
	if (n < dv * dv)
		return (1);
	return (is_prime_number_recur(n, dv + 1));
}


/**
 * is_prime_number - checks if n is prime number
 * @n: the number in question
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{

	return (is_prime_number_recur(n, 2));
}
