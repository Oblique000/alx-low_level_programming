#include "main.h"

/**
 * get_bit - Function that returns value of bit at given index
 * @n: number to check bits
 * @index: index to check bits
 * Return: value of the bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);
}
