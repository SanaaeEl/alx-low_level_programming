#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Description: prints the last digit of a number followed by a new line
 * Return: return 0 if completed successfuly
 */
int main(void)
{
	int n, l_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*asigning the last digit to a variable l_dgt*/
	l_dgt = n % 10;
	if (l_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_dgt);
	else if (l_dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_dgt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_dgt);
	return (0);
}
