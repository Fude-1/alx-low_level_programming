#include "main.h"

/**
 * _isupper - cheks for uppercase characters
 * @c: print int
 *
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
