#include "main.h"


/**
 * _strchr - locates a character in a string.
 * @s: string to look for occurance of c.
 * @c: character to look for.
 * Return: returns a pointer to the first occurance of c..
 */


char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	if (i == 0 && s[0] != c)
	{
		return (NULL);
	}
	else
		return (s + i);
}
