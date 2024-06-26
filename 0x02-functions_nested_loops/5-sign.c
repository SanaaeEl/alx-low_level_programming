#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: placholder for character to bo checked.
 * Return: return 1 if n is greater than zero,
 * 0 if n is zero; -1 otherwise.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(0);
		return (0);
	}
	else
		putchat('-');
		return (-1);
}
