#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 * Return: always 0
 */



int main(void)
{
	char *ptr;
	int i;

	i = 0;
	ptr = __FILE__;
	while (ptr[i] != '\0')
	{
		_putchar(ptr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
