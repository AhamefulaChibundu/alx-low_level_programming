#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of list_t
 * @head: Head
 * @str: The string
 * Return: Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node, *temp;
	int length = 0;

	new_end_node = malloc(sizeof(list_t));
	if (new_end_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_end_node->str = strdup(str);
	new_end_node->len = length;
	new_end_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_end_node;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_end_node;
	}
	return (*head);
}
