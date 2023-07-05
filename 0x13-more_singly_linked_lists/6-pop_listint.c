#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function deletes the head node of a linked list
 * @head: double pointer to linked list.
 *
 * Return: Deleted head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *nextNode;

	if (*head == NULL)
	{
		return (0);
	}

	head_data = (*head)->n;
	nextNode = (*head)->next;
	free(*head);
	*head = nextNode;

	return (head_data);
}
