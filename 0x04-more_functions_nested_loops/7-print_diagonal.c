#include "main.h"

/**
 * print_diagonal - draws a straight diagonal line in the terminal.
 * @n: number of times '\' will be printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j > 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
