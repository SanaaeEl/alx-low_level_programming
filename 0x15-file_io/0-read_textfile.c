#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file
 * @letters: numer of letters that should be read and printed
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, readf, pr_file;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	f = open(filename, O_RDONLY);
	readf = read(f, buffer, letters);
	pr_file = write(STDOUT_FILENO, buffer, readf);

	if (f == -1 || readf == -1)
		return (0);

	close(f);

	return (pr_file);
}
