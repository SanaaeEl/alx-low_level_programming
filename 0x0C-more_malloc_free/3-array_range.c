#include "main.h"



/**
 * array_range - creates an array of integers
 * @min: first element of the array
 * @max: last element
 * Return: the pointer to the newly created array
 */



int *array_range(int min, int max)
{
	int *ptr, i, nb;

	if (min > max)
		return (NULL);
	nb = max - min + 1;
	ptr = malloc(nb * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nb; i++)
	{
	       ptr[i] = min + i;
	}
	return (ptr);
}
