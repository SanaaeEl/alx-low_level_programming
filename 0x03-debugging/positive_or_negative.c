#include "main.h"

/**
 * positive_or_negative - checks n is positive or negative or is a 0.
 * @n: number to be checked.
 */

void positive_or_negative(int n)
{
	/*
	 * srand(time(0));
	 * n = rand() - RAND_MAX / 2;
	 */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
