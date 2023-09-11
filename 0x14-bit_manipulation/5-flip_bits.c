#include "main.h"

/**
 * flip_bits - Function that counts the number of bits
 * @n: the first number
 * @o: the second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int o)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ o;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}

	return (count);
}
