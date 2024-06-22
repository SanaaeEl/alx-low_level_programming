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
	while (a <= 99)
	{
		while (b <= 99)
		{
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
		}
	a++;
	}
	putchar('\n');
	return (0);
}
