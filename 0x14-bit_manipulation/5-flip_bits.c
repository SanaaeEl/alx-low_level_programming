#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * going from a number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int count = 0;

	while (diff)
	{
		if (diff & mask)
			count++;
		diff <<= 1;
	}
	return (count);
}
