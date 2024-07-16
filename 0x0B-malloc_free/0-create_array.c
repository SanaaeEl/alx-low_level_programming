#include "main.h"


/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array with.
 * Return: a pointer to the array, or NULL if it fails.
 */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;
	
	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
