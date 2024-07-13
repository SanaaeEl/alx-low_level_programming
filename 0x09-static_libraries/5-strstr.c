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
	int i, j = 0, l = 0, check;
	char *ptr = NULL;

	while (needle[j] != '\0')
	{
		l++;
		j++;
	}
	if (l == 0)
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		check = 0;
		for (j = 0; j < l; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			check++;
			if (check == 1)
				ptr = &haystack[i];
		}
		if (j == l)
			return (ptr);
		i++;
	}
	return (NULL);
}
