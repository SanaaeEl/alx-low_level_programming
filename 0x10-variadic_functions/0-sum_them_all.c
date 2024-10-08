#include "variadic_functions.h"



/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: nb of parameters to sum
 * @...: prameters to sum up
 * Return: te sum of all the parameters
 *
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
