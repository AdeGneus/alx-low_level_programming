#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: pointer to new array or NULL if fails
*/
int *array_range(int min, int max)
{
	int *array;
	int i = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (; i < size; i++, min++)
		array[i] = min;

	return (array);
}
