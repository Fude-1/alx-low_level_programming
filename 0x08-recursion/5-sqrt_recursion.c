#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - sqrt using recursion
 *
 * @n: Number to square root
 *
 * Return: Returns sqrt of a number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root.
 *
 * @n: number
 * @i: iterator
 *
 * Return: An integer.
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
