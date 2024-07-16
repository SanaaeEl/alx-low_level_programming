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
	unsigned int l1, l2, i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s2 == NULL)
	{
		return (s1);
	}
	else if (s1 == NULL)
	{
		return (s2);
	}
	else
	{
		l1 = strlen(s1);
		l2 = strlen(s2);
		ptr = malloc((l1 + l2 + 1) * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		i = 0;
		while (i < l1)
		{
			ptr[i] = s1[i];
			i++;
		}
		strcat(ptr, s2);
		return (ptr);
	}
}
