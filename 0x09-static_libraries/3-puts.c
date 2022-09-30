#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 *
 * @str: Input string
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
