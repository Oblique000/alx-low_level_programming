#include "main.h"

/**
 * _strchr - A function that locates a char in a string
 * @s: An input
 * @c: An input
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
