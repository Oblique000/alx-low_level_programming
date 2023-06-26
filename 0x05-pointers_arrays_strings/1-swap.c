#include <stdio.h>

/**
 * swap_int - function that swaps values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
