#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
