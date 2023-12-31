#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Prints the number of elements in a linked list_t list
 * @h: the linked list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
