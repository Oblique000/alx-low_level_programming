#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * followed by a new line
 * @n: Start printing from this number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (n = n; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d ", n);
	}
	}
	}
	else
	{
	for (n = n; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d ", n);
	}
	}
	}
}
