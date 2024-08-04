#include "main.h"



/**
 * str_len - counts the length of a string
 * @s: string in question
 * Return: the length of s
 *
 */


int str_len(char *s)
{
	unsigned int a;

	a = strlen(s);
	if (s == NULL)
	{
		s = "\0";
		a = 0;
	}
	return (a);
}

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

	slen1 = str_len(s1);
	slen2 = str_len(s2);
	if (n >= slen2)
		n = slen2;
	ptr = malloc((slen1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < slen1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < slen2 + 1; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[j] = '\0';
	return (ptr);
}
