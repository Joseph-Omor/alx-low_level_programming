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
	size_t count;

	count = 0;
	current = head;

	/* Check if list is empty */
	if (head == NULL)
	{
		return (0);
	}


	while (current != NULL)
	{
		/* Print the node address and value */
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			/**
			 * If loop encountered, print the loop starting node
			 * and exit
			 */
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		current = current->next;
	}

	return (count);
}
