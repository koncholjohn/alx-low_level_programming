#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers.
 *
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, num_elements;

	if (min > max)
		return (NULL);
	num_elements = max - min + 1;
	ptr = malloc(sizeof(int) * num_elements);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < num_elements; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
