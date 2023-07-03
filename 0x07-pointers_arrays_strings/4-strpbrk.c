#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: An input
 * @accept: An input
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
