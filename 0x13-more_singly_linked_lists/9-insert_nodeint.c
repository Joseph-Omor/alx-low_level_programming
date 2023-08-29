#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position
 * @head: Pointer to a listint_t list
 * @idx: inde of the list where the new node should be added
 * @n: data to store in new node
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current;
	listint_t *new_node;

	/* Allocate memory for the node and perform check for if failed */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	current = *head;
	/* If idx is 0, insert node at head */
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		/* Insert node at node before idx */
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}

	/* if insertion failed, free the allocated memory */
	free(new_node);
	return (NULL);
}
