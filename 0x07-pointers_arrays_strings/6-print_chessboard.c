#include "main.h"


/**
 * print_chessboard - prints the chessboard.
 * @a: chessboard elements.
 */


void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i][0] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
		i++;
	}
}
