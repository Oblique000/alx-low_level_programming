#include "main.h"

/**
 * _isupper - uppercase character
 * @c: character to check
 *
 * Return: 1 for uppercase char or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
