#include "main.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: Source string.
 * @src: Filling string.
 * @n: Length of buffer.
 *
 * Return: Returns new string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
