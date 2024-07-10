#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: main string to look in for the substring.
 * @needle: the substring to look for.
 * Return: returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, check, l;
	char *ptr = NULL;

	while (needle[j] != '\0')
	{
		l++;
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		check = 0;
		for (j = 0; j < l; j++)
		{
			if (needle[i + j] != haystack[j])
				break;
			check++;
			if (check == 1)
				ptr = &needle[i];
		}
		if (check == l)
			return (ptr);
	}
	return (NULL);
}
