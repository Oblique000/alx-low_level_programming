#include "main.h"

/**
 * clear_bit - A function that sets the value of a given bit to 0
 * @n: A pointer
 * @index: An index
 * Return: 1 if success, -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
