#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 , successful completion.
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
