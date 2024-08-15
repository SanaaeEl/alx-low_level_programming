#include "3-calc.h"


/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments' values
 * Return: Always 0
 */


int main(int argc, char **argv)
{
	int a, b, (*operat)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operat = get_op_func(argv[2]);
	if (!operat)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operat(a, b));
	return (0);


}
