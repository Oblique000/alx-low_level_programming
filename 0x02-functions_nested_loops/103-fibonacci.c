#include <stdio.h>

/**
 * main - Print the sum of all even fibonacci numbers less than 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long x = 1, y = 2, sum = y;

	while (y + x < 4000000)
	{
	y += x;
	if (y % 2 == 0)
	sum += y;
	x = y - x;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
