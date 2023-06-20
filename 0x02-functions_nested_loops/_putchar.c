#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write character c to stdout
 * @c: Character to print
 *
 * Return: success 1
 * on error, -1 is returned, and set error appropriately
 */
int _putchar(char c)
{
	return (write(1, && c, 1));
}
