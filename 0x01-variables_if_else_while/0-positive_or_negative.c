#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - prints whether the number stored in
 * the variable n is positive or negative or is a 0.
 * Return: returns 0 indicating successful completion.
 */
int main(void)/*prints whether the number stored in
 * the variable n is positive or negative or is a 0.*/
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
