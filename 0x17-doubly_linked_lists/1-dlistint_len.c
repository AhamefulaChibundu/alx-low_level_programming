#include "lists.h"

/**
 * dlistint_len - counts all the elements of the list
 * @h: Pointer to the list
 * Return: Number of counted nodes
**/
size_t dlistint_len(const dlistint_t *h)
{
	int m = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}
