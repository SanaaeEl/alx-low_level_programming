include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in question
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n)*8 - 1);
	int st;

	while(mask)
	{
		if((mask & n) != 0)
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
