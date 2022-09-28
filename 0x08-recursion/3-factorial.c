#include "main.h"

/**
 * factorial - Gets factorial of a given number.
 *
 * @n: Number
 *
 * Return: Return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
