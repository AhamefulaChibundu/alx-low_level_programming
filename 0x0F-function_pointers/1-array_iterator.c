#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Exexutes a function given as a parameter
 * @array: Array
 * @action: action
 * @size: The size of array
 * Return: Function to carryout on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;
	for (m = 0; m < size; m++)
		action(array[m]);
}
