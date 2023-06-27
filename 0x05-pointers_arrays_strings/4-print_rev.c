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
	int o;

		while (*s != '\n')
		{
			longi++;
			s++;
		}
	s--;

	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
