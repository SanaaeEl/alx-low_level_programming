#include <stdio.h>

/**
 * main - prints the size of various types
 * Return : 0, no error
 *
 */

int main(void)
{
	/* function sizeof calculates the varialbe size*/
	int a;
	printf("Size of a char: %a byte(s) \n",sizeof(a));
	printf("Size of a char: %a byte(s) \n",sizeof(int));
	printf("Size of a char: %a byte(s) \n",sizeof(long int));
	printf("Size of a char: %a byte(s) \n",sizeof(long long int));
	printf("Size of a char: %a byte(s) \n",sizeof(float));
	return (0);
}
