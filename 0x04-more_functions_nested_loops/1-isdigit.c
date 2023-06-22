#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @x: char to be checked
 *
 * Return: 1 for char that will be a digit or 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	return (0);
}
