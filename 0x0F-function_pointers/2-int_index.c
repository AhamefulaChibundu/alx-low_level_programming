#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: pointer to Array
 * @size: Size of array
 * @cmp: functin pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) == 1)
			return (m);
	}
	return (-1);
}
