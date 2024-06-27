#include <stdio.h>

/**
 * main - entry point, it computes and prints the sum
 * of all the multiples of 3 and 5 bellow 1024 (excluded).
 * Return: returns 0, successful completion.
 */

int main(void)
{
	int i, s;

	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			s = s + i;
	}
	printf("%d", s);
	_putchar('\n');
	return (0);
}
