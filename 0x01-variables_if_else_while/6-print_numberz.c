#include <stdio.h>

/**
 * main - prints single digit numbers of base10
 * followed by a new line.
 * Return: returns 0, completed successfuly.
 *
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
	}
	putchar('\n');
	return (0);
}
