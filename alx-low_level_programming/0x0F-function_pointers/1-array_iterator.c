#include "function_pointers.h"

/**
 * array_iterator - executes a funtion
 * @array: array
 * @size: size of array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !array) return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
