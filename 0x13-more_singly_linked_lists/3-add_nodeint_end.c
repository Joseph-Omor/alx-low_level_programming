#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a list
 * @head: Pointer to head of listint_t list
 * @n: integer value to save in new node
 *
 * Return: Pointer to new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/* new_node becomes head if the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* iterate through list to last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	/* Attach new_node to the last node's next */
	current->next = new_node;
	return (new_node);
}
