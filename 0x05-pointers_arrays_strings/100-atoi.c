#include "main.h"


/**
 * _aoti - converts a string to an integer.
 * @s: string to be converted.
 * Return: the integer extracted from the string.
 */


int _atoi(char *s)
{
	int p = 0, sign = 0;
	char *ptr;

	while (!isdigit(s[p]))
	{
		p++;
		if (s[p] == '-')
			sign++;
	}
	/* setting the pointer to the firt digit */
	ptr = &s[p];
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	if (p == 0 && !(isdigit(s[0])))
		return (0);
	else
		return (sign * atoi(ptr));
}
