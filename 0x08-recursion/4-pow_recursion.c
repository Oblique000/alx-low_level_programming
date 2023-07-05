#include "main.h"

/**
 * _pow_recursion - A function that returns the value
 * @x: The value to raise
 * @y: The value to power
 * Return: The results of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
