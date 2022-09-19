#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 *
 * @dest: Pointer after return value.
 * @src: Points the string.
 *
 * Return: Returns pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
