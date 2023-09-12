#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @file: the text file
 * @n: the number of letters
 * Return: x- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *file, size_t n)
{
	char *buf;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * n);
	y = read(fd, buf, n);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fd);
	return (x);
}
