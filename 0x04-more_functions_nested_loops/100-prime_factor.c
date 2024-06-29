#include <stdio.h>

/**
 * main - entry point
 * Description: finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: returns 0, successful completion.
 */

int main(void)
{
	unsigned long int lp_factor, nb = 612852475143;
	int i;

	i = 2;
	while (nb != 1)
	{
		if (nb % i == 0)
		{
			while (nb % i == 0)
			{
				lp_factor = i;
				nb = nb / i;
			}
		}
		i++;
	}
	printf("%lu\n", lp_factor);
}
