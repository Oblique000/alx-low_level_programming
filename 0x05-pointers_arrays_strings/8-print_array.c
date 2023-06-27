#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array
 * @a: An array
 * @n: Number of elements
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
