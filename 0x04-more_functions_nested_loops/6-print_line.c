#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times '_' will be printed.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n != 0 && n > 0)
			_putchar('_');
		else
			break;
	}
	_putchar('\n');
}
