#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *a = (char *) &x;

	return (*a);
}
