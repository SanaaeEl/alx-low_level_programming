#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 , successful completion.
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	int i, add = 0;
	char *ptr;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{	
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
