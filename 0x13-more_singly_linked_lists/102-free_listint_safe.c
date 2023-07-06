#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - A function that frees a linked list in a safe and
 * efficient manner.
 * @h: head pointer to the linked list
 *
 * Return: size variable representing the number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t size = 0;

	/* iterate through the list and perform operation */
	while (current != NULL)
	{
		/* store the next node in the 'next' pointer */
		next = current->next;
		/* increment variable to keep track of the number of nodes */
		size++;
		
		if (next >= current)
		{
			break;
		}
		/* deallocate the memory occupied by the current node */
		free(current);

		/* move current pointer to next node to continue traversal */
		current = next;
	}
	*h = NULL;
	return (size);
}
