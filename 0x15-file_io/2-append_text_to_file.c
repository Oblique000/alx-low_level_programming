#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: A pointer
 * @text_content: The string
 * Return: If fails -1, otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	c = open(filename, O_WRONLY | O_APPEND);
	x = write(c, text_content, len);

	if (c == -1 || x == -1)
		return (-1);

	close(c);

	return (1);
}
