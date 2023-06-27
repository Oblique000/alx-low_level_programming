#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 * @s: A string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int longi = 0;

	int x;

		while (*s != '\n')
		{
			longi++;
			s++;
		}
	s--;

	for (x = longi; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
