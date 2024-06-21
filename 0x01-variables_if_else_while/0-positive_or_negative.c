#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * main - Entry point
 * Description: printing the sign of the number
 * using if else if, and printf to display the result
 * Return: returns 0 indicating successful completion
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);/* return statement indicates a succesful completion*/
}
