#include "main.h"

/**
 * print_last_digit - A function that prints last digit
 * @n: takes in an integer
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
