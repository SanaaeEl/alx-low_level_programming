#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n,l_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_dgt = n % 10;
	if (l_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l_dgt);
	else if (l_dgt == 0)
		printf("Last digit of %d is %d and is 0", n, l_dgt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l_dgt);
	return (0);
}
