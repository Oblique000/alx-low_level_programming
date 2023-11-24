#include "main.h"

/**
 * print_binary - function that prints binary num equivalent to dec num
 * @n: num to print
 * Return: Always 0 (success)
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x++)
	{
		current = n >> x;

		if (current & x)
		{
			_putchar('1');
			count++;
		}
		while (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
