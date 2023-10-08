#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the size of memory space to be allocated
 * Return: pointer to allocatd memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
