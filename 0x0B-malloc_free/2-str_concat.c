#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: pointer to a newly allocated space in memory
 * which contains the concatenated two strings, and NULL on failure.
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int l1, l2, i, j;

	l1 = (s1 != NULL) ? strlen(s1) : 0;
	l2 = (s2 != NULL) ? strlen(s2) : 0;
	ptr = malloc((l1 + l2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < l2; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
