#include <unistd.h>

/**
 * _putchar - Writes char c to stdout
 * @c: Char to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return(writes(1, &c, 1));
}
