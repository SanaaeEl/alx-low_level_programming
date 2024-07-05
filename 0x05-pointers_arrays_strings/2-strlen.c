#include <stdio.h>


/**
 * _strlen - returns the length of a string.
 * @s: the string to return the length of.
 * Description: this function will return the length
 * of a string.
 * Returns: s_len the length of a string.
 *
 */

int _strlen(char *s)
{
	int s_len;

	for (s_len = 0; *s != '\0'; *s++)
	{
		s_len++;
	}
	return (s_len);
}
