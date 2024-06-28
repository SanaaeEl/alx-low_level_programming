#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		else
			break;
		_putchar('\n');
	}
	_putchar('\n');
}