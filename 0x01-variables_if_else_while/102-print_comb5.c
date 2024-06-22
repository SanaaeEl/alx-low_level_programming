#include <stdio.h>

/**
 * main - printing all possible different combinations
 * of two two-digits.
 * Return: 0, successful completion
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a != b)
			{
				putchar(a/10);
				putchar(a%10);
				putchar(' ');
				putchar(b);
			}
			if (a != 98 || b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
