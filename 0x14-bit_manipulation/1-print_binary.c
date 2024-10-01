#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @u: number in question
 */
void print_binary(unsigned long int u)
{
	unsigned long int mask = 1UL << (sizeof(u) * 8 - 1);
	int st = 0;

	while (mask)
	{
		if ((mask & u) != 0)
		{
			_putchar('1');
			st = 1;
		}
		else if (st)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (st == 0)
		_putchar('0');
}
