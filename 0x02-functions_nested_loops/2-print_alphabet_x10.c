#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	while (i <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
	_putchar('\n');
	i++;
	}
}
