#include <stdio.h>
#include "main.h"

/**
 * _putchar - write char c to stdout
 * @c: The char to check
 * Return: On success 1
 * On eror, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
