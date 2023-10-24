#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: pointer to the linked list
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t element_num = 0;

	while (h != NULL)
	{
		element_num++;
		h = h->next;
	}
	return (element_num);
}
