#include "main.h"


/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char t;
	char *start = s;
	char *end = s + len - 1;

	while (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
}
