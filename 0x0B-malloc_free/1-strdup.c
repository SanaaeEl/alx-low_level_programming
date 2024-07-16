#include "main.h"


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate.
 * Return: a pointer to the duplicated string, NULL if str = NULL
 * or if insufficient memory was available..
 */


char *_strdup(char *str)
{
	char *ptr;
	unsigned int l;

	if (str == NULL)
		return (NULL);
	l = strlen(str);
	ptr = malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
}
