#include "lists.h"

/**
 * print_list - A function that pints the strings of a linked list
 * @h: pointer to list
 *
 * Return: Number of nodes in list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL) /* Loop through the linked list */
	{
		if (h->str == NULL) /* Check if the current node's string is NULL */
		{
			printf("[0] (nil)\n");
		}		
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}		

		count ++;
		h = h->next;
	}
	
	return (count); /* Return the total number of nodes printed */
}
