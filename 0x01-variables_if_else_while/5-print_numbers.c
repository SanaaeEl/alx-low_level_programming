#include <stdio.h>

/**
 * main - prints the single digits followed by a new line.
 * Return: returns 0, completed successfuly.
 *
 */

int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
		printf("%d", nb);
	}
	putchar('\n');
	return (0);
}
