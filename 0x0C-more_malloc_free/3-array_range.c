#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered from
 * min to max, inclusive
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: NULL if min is greater than max or the function
 * fails, else return a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array, m, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		array[m] = min++;

	return (array);
}
