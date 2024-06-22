#include <stdio.h>

/**
 * main - printing all possible different combinations
 * of two two-digits.
 * Return: 0, successful completion
 */

int main(void)
{
	int a, b;

	a = b = 0;
	do {
		do {
			if (a != b)
			{
				putchar('0' + a);
				putchar(' ');
				putchar('0' + b);
			}
			if (a != 98 || b == 99)
				continue;
			putchar(',');
			putchar(' ');
			}
		b++;
		} while (b != 99)
	a++;
	} while (a != 99)
	putchar('\n');
	return (0);
}
