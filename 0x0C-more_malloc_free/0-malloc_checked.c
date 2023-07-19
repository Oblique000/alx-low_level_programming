#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @n: The number of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int n)
{
	void *ptr;

	ptr = malloc(n);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
