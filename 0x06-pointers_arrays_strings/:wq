#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @s: String to be encoded.
 *
 * Return: returns encoded string.
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtT1L";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}
