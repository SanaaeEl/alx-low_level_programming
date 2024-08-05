#include "main.h"

/**
 * main - checking the code
 * Return: 0, successful completion
 */

void print_s(char *s, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		printf("0x%02x ",s[i]);
	printf("\n");
}

char *_strstr(char *haystack, char *needle);

int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
