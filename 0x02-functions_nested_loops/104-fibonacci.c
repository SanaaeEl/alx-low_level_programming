#include <stdio.h>

/**
 * main - entry point, prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: returns 0, successful completion.
 */

int main(void)
{
	int i;
	unsigned long a, b, temp;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);

	for (i = 0; i < 96; i++)
	{
		temp = b;
		/*calculating the new value of 2nd nmbr*/
		b = a + b;
		/*set to the old value of 2nd nmbr*/
		a = temp;
		/*print new nmbr*/
		printf(", %ld", b);
	}
	printf("\n");
	return (0);
}
