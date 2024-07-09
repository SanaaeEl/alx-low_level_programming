#include "main.h"


/**
 * _strchr - locates a character in a string.
 * @s: string to look for occurance of c.
 * @c: character to look for.
 * Return: returns a pointer to the first occurance of c..
 */


char *_strchr(char *s, char c)
{
	unsigned int i, l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[l] != c || (i == 0 && s[0] != c))
	{
		return (NULL);
	}
	else
		return (s + i);
}
