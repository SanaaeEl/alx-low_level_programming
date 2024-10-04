#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	ssize_t op, wr;
	int l;
	
	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	l = strlen(text_content);

	op = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	wr = write(op, text_content, l);
	
	if (op == -1 || wr == -1)
		return (-1);

	return (1);
}
