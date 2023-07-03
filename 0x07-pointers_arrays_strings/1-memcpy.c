#include "main.h"

/**
 * _memcpy - A funnction that copies memory area
 * @dest: Memory stored
 * @src: Memory is copied
 * @n: The number of bytes
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
