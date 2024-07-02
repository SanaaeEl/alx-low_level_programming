#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: the 1st integer to be swaped.
 * @b: te 2nd integer to be swaped.
 *
 */

void swap_int(int *a, int *b)
{
	/*int *tmp;

	tmp = a;*/
	*a = b;
	*b = a; 
}
