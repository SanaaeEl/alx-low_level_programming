#include "main.h"

/**
 * _strncat - concatenates two strings, using n bytes from src..
 * @dest: destination string.
 * @src: string to be appended.
 * @n: number of bytes to use.
 * Return: returns the resulting string, (concatenated two strings).
 */


char *_strncat(char *dest, char *src, int n)
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
	lr = ld + n;
	if (ld == 0 && ls == 0)
	{
		dest = "";
	}
	else
	{
		for (i = ld; i <= lr; i++)
		{
			if (j < n)
			{
				dest[i] = src[j];
				j++;
			}
			else
			{
				break;
			}
		}
	}
	return (dest);
}
