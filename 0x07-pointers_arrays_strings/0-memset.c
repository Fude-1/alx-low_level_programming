#include "main.h"

/**
 * _memset - Fills memory with a constant type.
 *
 * @s: Source string.
 * @b: Constant byte.
 * @n: Lenght of buffer
 *
 * Return: Returns new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
