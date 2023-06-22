#include "main.h"

/**
 * print_triangle - Print a triangle, followed by a new line
 * @size: The size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = x; y <= size; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
