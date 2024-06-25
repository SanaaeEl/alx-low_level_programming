#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point.
 * Return: returns 0, successful completion.
 *
 */

int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 8);
	return (0);
}
