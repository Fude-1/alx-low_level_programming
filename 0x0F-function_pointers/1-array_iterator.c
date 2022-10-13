#include <stdio.h>

/**
 * array_iterator - Function that executes function given as parameter.
 *
 * @array: Array of elements.
 * @size: Size of the array.
 * @action: Function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
