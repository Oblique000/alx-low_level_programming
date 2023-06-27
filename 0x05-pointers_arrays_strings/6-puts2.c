#include "main.h"

/**
 * puts2 - Print every other char of a string
 * @str: The string
 * Return: Always 0
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\n')
	{
		y++;
	}

	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
