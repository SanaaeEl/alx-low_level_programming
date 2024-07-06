#include "main.h"


/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: the string to print.
 *
 */

void puts_half(char *str)
{
	int i, n, l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	n = (l - 1) / 2;
	if (l % 2 == 0)
		n++;
	for (i = n; i < l; i ++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
