#include "main.h"

int help_func(int, int);

/**
 * is_prime_number - Identifies prime
 *
 * @n: number.
 *
 * Return: integer.
 */

int is_prime_number(int n)
{
	return (help_func(n, 1));
}

/**
 * help_func - Checks if number is prime.
 *
 * @n: Number
 * @i: Iterator
 *
 * Return: 1 if number is prime, 0 otherwise.
 */

int help_func(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (help_func(n, i + i));
}
