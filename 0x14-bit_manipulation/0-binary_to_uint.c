#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @str: the string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *str)
{
	int x;
	unsigned int dec_val = 0;

	if (!str)
		return (0);

	for (x = 0; str[x]; x++)
	{
		if (str[x] < '0' || str[x] > '1')
			return (0);
		dec_val = 2 * dec_val + (str[x] - '0');
	}

	return (dec_val);
}
