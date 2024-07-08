#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: string to be copied.
 * @n: number of bytes to copy.
 * Return: returns the string copy..
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;/*, ld = 0, ls = 0, lr;*/

	/** while (src[ls] != '\0')
	{
		ls++;
	}
	while (dest[ld] != '\0')
	{
		ld++;
	}
	lr = ld + n;*/
	/*if (ld == 0 && ls == 0)
	{
		dest = "";
	}
	else
	{*/
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	/*}*/
	return (dest);
}
