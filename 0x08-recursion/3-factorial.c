#include "main.h"

/**
 * factorial - A function that returns factorial num
 * @n: The number
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
