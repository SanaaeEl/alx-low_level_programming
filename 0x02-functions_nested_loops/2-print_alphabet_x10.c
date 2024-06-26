#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case,
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i <10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
