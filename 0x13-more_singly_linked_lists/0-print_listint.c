#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: listint_t pointer argument
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}