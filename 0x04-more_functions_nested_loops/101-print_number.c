#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer
 * @n: The integer to print
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int c = n;

	if (n < 0)
	{
		_putchar(45);
		c = -c;
	}
	if (c / 10)
	{
		print_number(c / 10);
	}
	_putchar(c % 10 + '0');
}
