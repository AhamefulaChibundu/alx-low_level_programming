#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of list_t
 * @head: Head
 * @str: The string
 * Return: Address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[length])
	{
		length++;
	}
	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
