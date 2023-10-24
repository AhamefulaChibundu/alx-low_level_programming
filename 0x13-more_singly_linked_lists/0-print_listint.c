#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of the listint_t list
 * @h: pointer to the head of the list_t list
 * Return: Number of nodes in the lists_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
