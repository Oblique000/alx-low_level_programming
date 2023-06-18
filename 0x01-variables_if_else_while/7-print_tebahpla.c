#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: Always o (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
