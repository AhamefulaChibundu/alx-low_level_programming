#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: The previously allocated space for ptr
 * @new_size: The new size of the new memory block
 * Return: If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL
 * else, a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;
	char *ptr_copy, *data;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_memory = malloc(new_size);

		if (new_memory == NULL)
			return (NULL);

		return (new_memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	new_memory = malloc(sizeof(*ptr_copy) * new_size);

	if (new_memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	data = new_memory;

	for (m = 0; m < old_size && m < new_size; m++)
		data[m] = *ptr_copy++;

	free(ptr);
	return (new_memory);
}
