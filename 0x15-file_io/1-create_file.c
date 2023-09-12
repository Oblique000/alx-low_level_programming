#include "main.h"

/**
 * create_file - A function that creates a file.
 * @file: A pointer
 * @text: A pointer to a string
 * Return: If fails -1, otherwise 1
 */

int create_file(const char *file, char *text)
{
	int fd, x, len = 0;

	if (file == NULL)
		return (-1);

	if (text != NULL)
	{
		for (len = 0; text[len];)
			len++;
	}

	fd = open(file, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text, len);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
