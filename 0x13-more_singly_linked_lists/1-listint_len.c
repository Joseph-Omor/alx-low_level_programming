#include "lists.h"

/**
 * listint_len - Counts elements in a linked list
 * @h: linked lists argument (listint_t)
 *
 * Return: number of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

