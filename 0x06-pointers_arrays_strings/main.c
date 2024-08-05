#include "main.h"

/**
 * main - checking the code
 * Return: 0, successful completion
 */

int main(void)
{
	char s1[98] = "Hello ";
	char *ptr;

	printf("%s\n",s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n",s1);
	printf("%s\n",ptr);
	return (0);
}
