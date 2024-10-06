#include "main.h"

/**
 * main - check the code
 * @ac: arguments' count
 * @av: list of arguments
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t paste, copy;
	char buffer[BUFF];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	copy = read(file_from, buffer, BUFF);
	if (file_from == -1 || copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s",
				av[1]);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	paste = write(file_to, buffer, copy);
	if (file_to == -1 || paste == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);
}
