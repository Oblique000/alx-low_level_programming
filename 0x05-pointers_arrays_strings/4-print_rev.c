#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 * @s: A string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
