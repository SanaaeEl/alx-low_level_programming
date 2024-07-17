#include "main.h"


/**
 * strtow - splits a string into words.
 * @str: string to split.
 * Return: returns a pointer to an array of strings (words)
 */


char **strtow(char *str)
{
	int i, j, k, count = 0, word;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	i = 0;
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
	word = 0;
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
				for (k = 0; k < word; k++)
					free(ptr[k]);
				free(ptr);
				return (NULL);
			}
			for (k = 0; k < j; k++)
			{
				ptr[word][k] = str[i + k];
			}
			ptr[word][j] = '\0';
			word++;
			i += j;
		}
	}
	ptr[word] = NULL;
	return (ptr);
}
