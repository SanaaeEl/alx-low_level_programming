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
	printf("%d, %d", a, b);

	for (i = 0; i < 48; i++)
	{
		temp = b;
		/*calculating the new value of 2nd nmbr*/
		b = a + b;
		/*set to the old value of 2nd nmbr*/
		a = temp;
		/*print new nmbr*/
		printf(", %d", b);
	}
	printf("\n");
	return (0);
}
