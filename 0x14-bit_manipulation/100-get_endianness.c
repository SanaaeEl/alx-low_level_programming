#include "main.h"

/**
 * get_endianness - checkes the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/**
	 * take the integer 1, and interpret
	 * its address as a pointer to a char
	 *
	 * -If the first byte is 1, the system is little-endian
	 * -If the first byte is 0, the system is big-endian
	 */
	unsigned int n = 1;

	return (*(char *) & n == 1);
}
