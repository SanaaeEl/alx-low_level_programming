#include <stdio.h>

/*
 *
 * main - prints the alphabet in reverse followed by a new line
 * Return: returns 0, completed successfuly
 *
 */

int main(void)
{
	char c;

	/*printing alphabet in reverse*/
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
