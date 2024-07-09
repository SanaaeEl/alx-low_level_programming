#include "main.h"


/**
 * _memcpy - copies memory area.
 * @dest: memory area to copy to.
 * @src: memory area to copy from.
 * @n: number of bytes of the memory area to cpoy.
 * Return: returns a pointer to the memory area dest.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j, c;
	char **ptr = &dest;
	
	c = 0;
	while (**ptr != dest[c])
	{
		c++;
	}
	j = 0;
	for (i = c; i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
