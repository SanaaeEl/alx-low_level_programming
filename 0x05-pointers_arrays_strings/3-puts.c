#include "main.h"


/**
 * _puts - prints a string, followed by a new line, to stdout..
 * @s: the string to print.
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str + '0');
	}
	_putchar('\n');
}
