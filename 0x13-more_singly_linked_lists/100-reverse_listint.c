#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node = NULL;

	/* check for empty list */
	if (current == NULL || current->next == NULL)
	{
		return (current);
	}

	while (current != NULL)
	{
		/* Store the next node */
		next_node = current->next;
		/* Reverse the pointer of the current node */
		current->next = prev;
		/* Move the prev pointer to the current node */
		prev = current;
		/* Move the current pointer to the next node */
		current = next_node;
	}

	/* Update the head pointer to the new first node */
	*head = prev;
	return (*head);
}
