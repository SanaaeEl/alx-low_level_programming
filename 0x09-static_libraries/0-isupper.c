#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: is the palceholder for the input character.
 * Return: return 1 if the character is an uppercase,
 * and 0 otherwise.
 */

int _isupper(char c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
