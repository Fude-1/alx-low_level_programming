#include "main.h"

/**
 * _strlen_recursion - Get length of a string.
 * @s: String parameter
 *
 * Return: Returns length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
