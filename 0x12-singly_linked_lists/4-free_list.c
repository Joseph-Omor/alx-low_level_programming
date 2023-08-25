#include "lists.h"

/**
 * free_list - that frees a list_t list.
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head; /* store the current mode */
		head = head->next;
		free(current->str);
		free(current);
	}
}
