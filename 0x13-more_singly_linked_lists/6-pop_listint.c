#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int node_data;

	if (head == NULL || *head == NULL)
		return (0);
	first_node = *head;
	*head = first_node->next;
	node_data = first_node->n;
	free(first_node);
	return (node_data);

}
