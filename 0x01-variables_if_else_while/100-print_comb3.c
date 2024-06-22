#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits.
 * Return: 0, successful completion
 */

int main(void)
{
	int a, b;
	for (a = 0, a <= 8, a++)
	{
		for (b = 1, b <= 9, b++)
		{
			putchar('0'+ a);
			putchar('0'+ b);
		}
		if (a == 8 && b == 8)
			continue;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
