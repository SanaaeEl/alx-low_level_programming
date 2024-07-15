#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 , successful completion.
 */


int main(int argc, char *argv[])
{
	int i, cents, coins = 0, change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (cents >= change[i])
			{
				coins++;
				cents -= change[i];
			}
		}
		printf("%d\n", coins);
		return (0);
	}
}
