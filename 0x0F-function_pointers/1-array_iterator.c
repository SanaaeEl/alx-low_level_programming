#include "function_pointers.h"


/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array in question
 * @size: size of the array
 * @action: the function pointer
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *lastel = array + size;

	if (array && size && action)
		do {
			action(*array++);
		} while (array < lastel);
}
