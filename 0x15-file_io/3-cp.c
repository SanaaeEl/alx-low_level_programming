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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file_from);
		exit(99);
	}

	while((copy = read(file_from, buffer, BUFF)) > 0)
	{
		paste = write(file_to, buffer, copy);
		if (paste == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					av[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[0]);
		close(file_from);
		close(file_to);
		exit(98);
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
