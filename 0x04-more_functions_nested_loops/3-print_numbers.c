#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Return: The numbers 0 to 9
 */

void print_numbers(void)
{
	int x = 48;

	while (x < 58)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
