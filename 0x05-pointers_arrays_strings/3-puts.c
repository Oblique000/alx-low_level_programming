#include "main.h"

/**
 * _puts - Print a string
 * @str: A string
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
