#include "lists.h"

/**
 * list_len - a function that returns number of elements in a linked list
 * @h: pointer to a list_s list
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* Traverse the linked list */
	while (h != NULL)
	{
		count++;
		h = h->next; /* Move to the next node */
	}

	return (count);
}
