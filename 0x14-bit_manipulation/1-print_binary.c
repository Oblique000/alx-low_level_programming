#include "main.h"

/**
 * _pow - func that calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int x;

	num = 1;
	for (x = 1; x <= power; x++)
		num *= base;
	return (num);
}

/**
 * print_binary - function that prints a num in binary notation
 * @n: num to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int current, check;
	char a;

	a = 0;
	current = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (current != 0)
	{
		check = n & current;
		if (check == current)
		{
			a = 1;
			_putchar('1');
		}
		else if (a == 1 || current == 1)
		{
			_putchar('0');
		}
		current >>= 1;
	}
}

