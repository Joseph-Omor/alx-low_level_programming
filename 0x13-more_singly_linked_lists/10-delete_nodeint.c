#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at index 'index'
 * @head: Pointer to linked list
 * @index: index of node to delete from linked list
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = NULL;

	if (index == 0)
	{
		/* Check if the list is empty */
		if (*head == NULL)
		{
			return (-1);
		}

		/* Update the head pointer to skip the first node */
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Traverse the list to find the node at position index -1 */
	while (index > 1)
	{
		/* check for out-of-bounds index */
		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
		index--;
	}

	/* handles if traversal reached desired position */
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;

	/* Update pointers to remove the node from the list */
	current->next = current->next->next;

	free(temp);

	return (-1);
}
