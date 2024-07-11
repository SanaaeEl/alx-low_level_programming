#include "main.h"


/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to calculate the length of.
 * Return: the length of string s.
 */


int _strlen_recursion(char *s)
{
	int l;
	char **ptr;
	
	ptr = s[0];
	if (*s == **ptr)
		l = 0;
	if (*s == '\0')
		return (0);
	l++;
	return (_strlen_recursion(s + 1));
}
