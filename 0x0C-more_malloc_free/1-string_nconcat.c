#include "main.h"



/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes of s2
 * Return: a pointer to a newly allocated space in memory
 *
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int slen1, slen2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	slen1 = strlen(s1);
	slen2 = strlen(s2);
	if (n >= slen2)
		n = slen2;
	ptr = malloc((slen1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < slen1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
