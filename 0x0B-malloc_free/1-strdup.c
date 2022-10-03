#include "main.h"

/**
 * _strdup - Duplicates string.
 *
 * @str: String to be duplicated.
 *
 * Return: Returns pointer to duplicated string.
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = (char *)malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
