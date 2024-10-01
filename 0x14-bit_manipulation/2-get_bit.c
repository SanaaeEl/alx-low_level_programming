#include "main.h"

/**
 * get_int - return the value of a bit at a given index
 * @n: unsigned long int
 * @index: index of the bit
 * Return: bit value at @index, otherwise -1 if there's an error
 */

int get_index(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
