#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Starting address of memory
 * @b: The desired value
 * @n: The mumber of bytes
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
