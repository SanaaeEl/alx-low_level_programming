#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int a, b, m;

	for (a = 0; a < 10; a++)
	{
		/*_putchar('0');*/
		for (b = 0; b < 10; b++)
		{
			m = a * b;
			if (b == 0)
			{
				_putchar(m + '0');
			}
			if (b != 0 && m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (b >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
