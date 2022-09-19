#include "main.h"

/**
 * _strlen - Returns the legnth of a string.
 *
 * @s: The string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0' : len++)
		;
	return (len);
}
