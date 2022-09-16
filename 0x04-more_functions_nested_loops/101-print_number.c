#include "main.h"

/**
 * print_number - prints an integer
 * @n: random integer
 */

void print_number(int n)
{
	char c, d;
	int i;
	int j = 0;

	if (n < 0)
	{
		_putchar('-');
		c = (char)('0' - (n % 10));
		n = n / -10;
	}
	else
	{
		c = (char)((n % 10) + '0');
		n = n / 10;
	}

	i = 0;
	while (n > 0)
	{
		i = i * 10 + (n % 10);
		n = n / 10;
		j++;
	}

	while (i > 0)
	{
		d = (char)((i % 10) + '0');
		_putchar(d);
		i = i / 10;
		j--;
	}

	while (j != 0)
	{
		_putchar('0');
		j--;
	}
	_putchar(c);
}
