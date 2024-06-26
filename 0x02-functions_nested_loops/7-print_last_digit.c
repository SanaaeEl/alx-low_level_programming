#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @nb: the number from which the last digit is printed.
 * Return: returns the last digit.
 */

int print_last_digit(int nb)
{
	int l_digit = nb % 10;

	if (nb < 0)
		l_digit *= -1;
	_putchar(l_digit + '0');
	return (l_digit);
}
