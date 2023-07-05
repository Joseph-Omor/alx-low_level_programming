#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position of linked
 * list
 * @idx: The index
 * @head: The linked list
 * @n: Data value
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = NULL;
	current = *head;

	/* Special case: insert at the beginning of the list */
	if (idx == 0)
	{
		/* create a new node */
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;

		/* Update pointers to insert the new node at the beginning */
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	/* Traverse the list to find the node at position idx -1 */
	while (idx > 1)
	{
		/* check for out-of-bounds index */
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		idx--;
	}

	/* Check if the traversal reached the desired position */
	if (current == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

