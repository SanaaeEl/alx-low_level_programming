#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: string to be appended.
 * Return: returns the resulting string, (concatenated two strings).
 */


char *_strcat(char *dest, char *src)
{
	int i, j = 0, ld = 0, ls = 0, lr;

	while (src[ls] != '\0')
	{
		ls++;
	}
	while (dest[ld] != '\0')
	{
		ld++;
	}
	lr = ld + ls;
	for (i = ld; i <= lr; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
