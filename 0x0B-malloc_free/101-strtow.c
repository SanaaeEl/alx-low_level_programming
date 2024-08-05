#include "main.h"


/**
 * strtow - splits a string into words.
 * @str: string to split.
 * Return: returns a pointer to an array of strings (words)
 */


char **strtow(char *str)
{
	int i = 0, j, k, count = 0, word = 0;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}

	}
	ptr = (char **)malloc((count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != 0)
		{
			j = 0;
			while (str[i + j] != ' ' && str[i + j] != '\0')
				j++;
			ptr[word] = (char *)malloc((j + 1) * sizeof(char));
			if (ptr[word] == NULL)
			{
				free_grid(ptr, word);
				return (NULL);
			}
			strncpy(ptr[word], &str[i], j);
			ptr[word][j] = '\0';
			word++;
			i += j;
		}
	}
	ptr[word] = NULL;
	return (ptr);
}
