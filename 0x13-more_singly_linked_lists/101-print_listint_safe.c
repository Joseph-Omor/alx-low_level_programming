#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list (safe version)
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check if the current node points to a previous node */
		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		/* Move to the next node */
		current = current->next;
	}

	/* Handle the case of a loop in the list */
	if (current != NULL)
	{
		exit(98);
	}

	return (count);
}
