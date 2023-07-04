#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * @h: list argument
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}