#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: is the palceholder for the input.
 * Return: return 1 if the c is a digit,
 * and 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
