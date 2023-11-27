#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads text file and prints to POSIXSTDOUT
 * @filename: Text file to read
 * @letters: Num of letters to read
 * Return: w- actual num of bytes, print 0 if function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_x;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	file_x = open(filename, O_RDONLY);
	if (file_x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_x);
		return (0);
	}
	rd = read(file_x, buf, letters);
	close(file_x);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	if (rd != wr)
		return (0);
	return (wr);
}
