#include "main.h"



/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer to a 2 dimensional array of integers, NULL on failure
 * or if width or height is 0 or negative.
 */


int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
