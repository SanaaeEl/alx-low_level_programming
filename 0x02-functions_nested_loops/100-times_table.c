#include "main.h"

/**
 * times_table - prints the n times table, starting with 0.
 * @n: times table's number.
 */

void times_table(int n)
{
	int a, b, m, n;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
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
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
