#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer  to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head; /* store the current node */
		head = head->next; /* move to the next node */
		free(current); /* free the stored current node */
	}
}
