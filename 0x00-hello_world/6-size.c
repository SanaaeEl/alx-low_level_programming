#include <stdio.h>

/**
 * main - prints the size of various types
 * return int always returns 0, indicating successful completion
 */

int main(void)/*return 0 if completed successfuly*/
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0); /* return statement indicates a succesful completion*/
}
