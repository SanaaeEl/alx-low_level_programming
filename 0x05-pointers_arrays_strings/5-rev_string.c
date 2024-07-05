#include "main.h"


/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i, len;
	char t;

	len = strlen(s);
	for (i = 0; i > len / 2; i++)
	{
		t = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = t;
	}
}
