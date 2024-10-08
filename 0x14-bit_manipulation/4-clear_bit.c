#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: the index to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int u;

	if (index >= sizeof(n) * 8)
		return (-1);

	u = 1 << index;
	if ((*n & u) != 0)
		*n ^= u;
	return (1);
}
