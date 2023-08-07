#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that read text file print to STDOUT.
 * @filename: A text file
 * @letters: A number of letters
 * Return: w- actual number or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
