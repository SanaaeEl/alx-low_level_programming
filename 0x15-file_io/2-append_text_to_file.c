#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, ap;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	op = open(filename, O_WRONLY | O_APPEND);
	ap = write(op, text_content, strlen(text_content));

	if (op == -1 || ap == -1)
		return (-1);

	return (1);
}
