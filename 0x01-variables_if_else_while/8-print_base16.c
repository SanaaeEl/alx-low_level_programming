#include <stdio.h>

/*
 *
 * main - Entry point
 * Description: printf prints all numbers of base16
 * followed by a new line
 * Return: returns 0, completed successfuly
 *
 */

int main(void)
{
	int c;
	char a;

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
