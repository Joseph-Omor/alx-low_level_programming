#include "lists.h"

/**
 * free_listint2 - A function that fress a listint_t list
 * @head: Pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
