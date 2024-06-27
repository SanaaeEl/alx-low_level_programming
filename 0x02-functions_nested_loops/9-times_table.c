#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int a, b, m;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			m = a * b;
			if (m == 0)
			{
				_putchar('0');
			}
			else if (m != 0 && m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			if (b != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
