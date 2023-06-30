#include "main.h"
#include <string.h>
/**
 * char *string_toupper - change all lowercase letters of a string to uppercase
 *@st: the string to be converted
 *Return: st
 */
char *string_toupper(char *st)
{
	int j;

	for (j = 0; st[j] != '\0'; j++)
	{
		if (st[j] >= 'a' && st[j] <= 'z')
		{
			st[j] = st[j] - 32;
		}
	}
	return (st);
}
