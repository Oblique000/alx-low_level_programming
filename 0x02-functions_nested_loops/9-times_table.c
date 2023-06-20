#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int t, u, v;

	for (t = 0; t < 10; t++)
	{
		for (u = 0; u < 10; u++)
		{
			v = u * t;
			if (u == 0)
			{
				_putchar(v + '0');
			}
			if (v < 10 && u != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(v + '0');
			}
			else if (v >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((v / 10) + '0');
				_putchar((v % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
