#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: If min > max or the function fails - NULL.
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	for (size = 0; size < (max - min); size++)

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
