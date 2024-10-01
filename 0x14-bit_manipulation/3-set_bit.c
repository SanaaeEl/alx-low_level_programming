#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: the index to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n += (long)pow(2, index);
	return (1);
}
