#include <stdio.h>


/**
 * _strlen - returns the length of a string.
 * @s: the string to return the length of.
 * Returns: the length of a string.
 *
 */

int _strlen(char *s)
{
	int s_len;

	while (*s != '\0')
	{
		s_len++;
		*s++;
	}
	return (s_len);
}
