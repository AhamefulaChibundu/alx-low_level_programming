#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain
 * number of elements each of an inputed byte size
 * @size: The byte size of each array element
 * @nmemb: The number of elements
 * Return: NULL if size = 0, nmemb = 0 or function fails
 * else returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr_arr = calloc(nmemb, size);

	if (ptr_arr == NULL)
		return (NULL);
	else
		return (ptr_arr);
}
