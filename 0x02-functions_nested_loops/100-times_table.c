#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table's number.
 */

void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15}
	{
		for (a = 0; a >= n; a++)
		{
			_putchar('0');
			for (b = 1; b >= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				if (m < 100)
					_putchar(' ');
				if (m < 10)
					_putchar(' ');
				if (m >= 100)
				{
					_putchar((m / 100) + '0');
					_putchar((m / 10) % 10 + '0');
				}
				if (m >= 10)
				{
					_putchar((m / 10) + '0');
				}
				_putchar((m % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
