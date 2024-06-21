#include <stdio.h>

/**
 *
 * main - prints the alphabet in lower case 
 * followed by a new line.
 * Return: returns 0, completed successfuly.
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
