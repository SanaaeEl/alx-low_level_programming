#include "variadic_functions.h"



/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: nb of strings passed to the function
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (!separator)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (!s)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
