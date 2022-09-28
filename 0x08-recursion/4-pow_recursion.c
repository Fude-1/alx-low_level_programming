#include "main.h"

/**
 * _pow_recursion - Gets value of x raised to power of y.
 *
 * @x: Integer to be raised.
 * @y: Power number.
 *
 * Return: Returns the power result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
