#include <stdio.h>

/**
 * main - prints the size of various types
 * Return : 0, no error
 *
 */

int main(void)
{
	/* function sizeof calculates the varialbe size*/
	printf("Size of a char: %d byte(s) \n", sizeof(char));
	printf("Size of an int: %d byte(s) \n", sizeof(int));
	printf("Size of a long int: %d byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %d byte(s) \n", sizeof(long long int));
	printf("Size of a float: %d byte(s) \n", sizeof(float));
	return (0); /* Return 0 indicates a succesful completion*/
}
