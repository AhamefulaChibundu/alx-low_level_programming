#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all elements of a list_t list
 * @h: the list_t list
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, (nil));
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
