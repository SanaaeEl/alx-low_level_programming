#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix to sum diagonals from.
 * @size: matrix' size.
 */


void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + i * size + j);
			if (size - 1 - j == i)
				sum2 += *(a + i * size + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
