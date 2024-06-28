#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print.
 */

void print_number(int n)
{
	unsigned int temp = n;

	/* Handle negatvie numbers */
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	if (temp / 10 != 0)
	{
		/* prints the digits recursively except the last one */
		print_number(temp / 10);
	}
	_putchar(temp % 10 + '0');
}
