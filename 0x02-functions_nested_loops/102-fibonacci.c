#include <stdio.h>

/**
 * main - entry point, prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: returns 0, successful completion.
 */

int main(void)
{
	int i, a, b, temp;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 0; i < 50; i++)
	{
		temp = b;
		a = a + b;
		printf("%d", a);
		a = temp;
	}
	printf("\n");
	return (0);
}
