#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Tells if an integer is a prime number or not
 * @n: The number
 * Return: 1 if n is a prime number, and 0 if not
 */

int is_prime_number(int n)
{
	return (actual_prime(n, 1));
}

/**
 * is_prime_number - Calculates if number if prime recursively
 * @n: The number
 * @i: iterator
 * Return: 1 if n is prime number, and 0 if not
 */

int actual_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i + 1));
}
