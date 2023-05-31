#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all elements of a dlistint_t
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
