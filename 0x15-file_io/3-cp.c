#include "main.h"


/**
 * usage - checks for the number of arguments
 * @argc: arguments' count
 */
void usage(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

}

/**
 * read_check - checks if reading from the source file is successful
 * @file_from: file descriptor of the source file
 * @buffer: where to store the content
 * @argv: list of arguments
 * Return: number of bytes read
 */
int read_check(int file_from, char *buffer, char **argv)
{
	ssize_t copy;

	copy = read(file_from, buffer, BUFF);
	if (file_from == -1 || copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	return (copy);
}

/**
 * write_check - checks if writing to the copy file is successful
 * @file_to: file descriptor of copy file (destination)
 * @buffer: content to be written
 * @copy: number of read bytes
 * @argv: list of arguments
 */
void write_check(int file_to, char *buffer, ssize_t copy, char **argv)
{
	ssize_t paste;

	paste = write(file_to, buffer, copy);
	if (paste == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_check - checks if colsing the fd was successful
 * @fd: file descriptor
 */
void close_check(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


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
	ssize_t copy;
	char buffer[BUFF];

	usage(ac);

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

	while ((copy = read_check(file_from, buffer, av)) > 0)
	{
		write_check(file_to, buffer, copy, av);
	}

	close_check(file_from);
	close_check(file_to);
	return (0);
}
