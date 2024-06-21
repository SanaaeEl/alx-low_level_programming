#include <stdio.h>

/*
 *
 * main - Entry point
 * Description: printf() prints all possible combinations.
 * of single-digit numbers, followed by a new line.
 * Return: returns 0, completed successfuly.
 *
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
