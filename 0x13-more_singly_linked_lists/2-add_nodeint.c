#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of a list
 * @head: Pointer to pointer of head of listint_t list
 * @n: integer value to store in new node
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
