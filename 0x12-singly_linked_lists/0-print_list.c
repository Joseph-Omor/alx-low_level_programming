#include "lists.h"

/**
 * print_list - a function that prints all the elements of its argument
 * @h: list argument
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
			count++;
		h = h->next;
	}

	return (count);
}
