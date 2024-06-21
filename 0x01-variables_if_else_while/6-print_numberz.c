#include <stdio.h>

/*
 *
 * main - prints the alphabet followed by a new line
 * Return: returns 0, completed successfuly
 *
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
