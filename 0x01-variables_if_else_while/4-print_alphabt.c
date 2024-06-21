#include <stdio.h>

/**
 *
 * main - prints the alphabet except e and q
 * followed by a new line
 * Return: returns 0, completed successfuly
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
