#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node to the end of the list
 * @head: pointer to list
 * @n: data argument
 *
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}


	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = malloc(sizeof(listint_t));
	if (temp->next == NULL)
	{
		return (NULL);
	}

	temp->next->n = n;
	temp->next->next = NULL;

	return (temp->next);
}
