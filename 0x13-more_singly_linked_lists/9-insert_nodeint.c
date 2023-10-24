#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - main entry point
 * @head: double pointer to the first node in the list
 * @n: value for new node
 * @idx: index of the node to insert
 * Return: pointer to the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (m = 1; m < idx && temp != NULL; m++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
