#include "main.h"


/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: arguments' values.
 * Return: a pointer to a new string, or NULL if it fails
 */


char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
