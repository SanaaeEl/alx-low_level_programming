#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: main string to look in for occurrence of any of the bytes
 * of the second dtring.
 * @accept: second string.
 * Return: returns pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found.
 */


char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *ptr = NULL;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (ptr);
}
