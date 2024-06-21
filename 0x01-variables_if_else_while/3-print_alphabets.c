#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * then in upper case followed by a new line.
 * Return: returns 0, completed successfuly.
 *
 */

int main(void)
{
	char c, u_c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (u_c = 'A'; u_c <= 'Z'; u_c++)
	{
		putchar(u_c);
	}
	putchar('\n');
	return (0);
}
