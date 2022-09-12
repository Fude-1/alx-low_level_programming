#include "main.h"

/**
 * print_sign - A function that prints a sign of a number
 * @n: The number of which a sign will be printed
 * Return: 1 if number is greater than zero
 * 0 if number is zer0
 * -1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
