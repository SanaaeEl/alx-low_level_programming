#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print.
 */

void print_number(int n)
{
	unsigned int temp;

	temp = n;
	/* handle negatvie numbers */
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	/* print the digits recursively, except tha last one */
	if (temp / 10 != 0)
	{
		print_number(temp / 10);
	}
	_putchar(temp % 10 + '0');
}
