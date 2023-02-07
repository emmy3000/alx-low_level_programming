#include "main.h"

/**
 * _strlen - checks for length of a string
 *
 * @str: pointer to a string
 *
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: a NULL terminated string to be added at the
 * end of the file.
 *
 * Return: 1 Success, -1 Error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
