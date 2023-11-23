#include "main.h"

/**
 * _pow - functhat calculates (base ^ power)
 * @base: base of exponent
 * @power: power of exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints binary num equivalent of a decimal number
 * @n: The num to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x++)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
