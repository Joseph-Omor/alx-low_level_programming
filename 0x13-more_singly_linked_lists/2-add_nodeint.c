#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node to start of linked list
 * @head: pointer to listint_t argument
 * @n: data variable
 *
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

