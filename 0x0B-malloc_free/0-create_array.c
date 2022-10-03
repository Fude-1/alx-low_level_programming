#include "main.h"

/**
 * create_array - creates an array of chars,
 *		-and initializes it with a specific char
 *
 * @size: Size of array
 * @c: Character an array is initialized with.
 *
 * Return: Returns a pointer to an array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
