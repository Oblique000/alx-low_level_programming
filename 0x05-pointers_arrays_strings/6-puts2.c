#include "main.h"

/**
 * puts2 - Print every other char of a string
 * @str: The string
 * Return: Always 0
 */
void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
		k++;
	}
	_putchar('\n');
}
