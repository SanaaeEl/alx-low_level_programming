#include "main.h"

/**
 * _islower - cheks for lower case characters.
 * parameter c: is the palceholder for the input character.
 * Return: return 1 if the character is a lower case,
 * and 0 if it's uppercase.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
