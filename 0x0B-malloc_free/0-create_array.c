#include <stdlib.h>

/**
 * create_array - Entry point of the function
 * Description: Creates an array of chars and initializes it with a char
 * @size: size of the array to be created
 * @c: The character to be initialized in the array
 * Return: NULL if size = 0 or NULL if it fails to return a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *pt_arr;

	if (size == 0)
	{
		return (NULL);
	}

	/*Allocation of memory*/
	pt_arr = malloc(size * sizeof(char));

	if (pt_arr == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < size; m++)
	{
		pt_arr[m] = c;
	}
	return (pt_arr);
}
