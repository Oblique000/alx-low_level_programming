#include <stdio.h>

/**
 * main - Print all letters except q and e
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int num = 0;

	while (num < 25)
	while (num < 24)
	{
		putchar(alph[num]);
		num++;
	}
	putchar('\n');
	return (0);
}
