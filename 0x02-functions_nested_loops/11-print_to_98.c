#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *@n: counting begins from n.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		printf("%d", n);
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", n);
		}
	}
	else if (n > 98)
	{
		printf("%d", n);
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", n);
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
