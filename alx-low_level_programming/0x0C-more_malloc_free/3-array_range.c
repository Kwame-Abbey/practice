#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = min;
	for (j = 0; i <= max; i++, j++)
		ptr[j] = i;
	return (ptr);
}
