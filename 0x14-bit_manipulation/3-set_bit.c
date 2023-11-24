#include "main.h"

/**
 * set_bit - function that sets value of bit to 1 at given index
 * @n: number to set
 * @index: index to set
 * Return: 1 if successful, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
