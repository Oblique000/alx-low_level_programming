#include "main.h"

/**
 * _strlen_recursion - A fuction that returns the length of string
 * @s: The string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
