#include "main.h"

/**
 * binary_to_uimt - A function that converts a binary num to an unsigned int.
 * @b: A pointer to string containing a binary num.
 *
 * Return: decimal value of binary num, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		num <<= 1;
		if (b[x] == '1')
			num += 1;
	}
	return (num)
}
