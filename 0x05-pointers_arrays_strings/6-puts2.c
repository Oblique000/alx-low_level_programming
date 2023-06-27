#include "main.h"

/**
 * puts2 - Print every other char of a string
 * @str: The string
 * Return: Always 0
 */
void puts2(char *str)
{
	int longi = 0;
	int k = 0;
	char *y = str;
	int l;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	k = longi - 1;

	for (l = 0; l <= k; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
