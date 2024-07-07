#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @src: string to be copied.
 * @dest: destination string, (the copy).
 * Return: the pointer to dest.
 */



char *_strcpy(char *dest, char *src)
{
	int i, l = 0;

	do {
		l++;
	} while (src[l] != '\0');
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
