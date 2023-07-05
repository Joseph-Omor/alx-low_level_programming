#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data values in a
 * linked list
 * @head: Pointer to the linked list
 *
 * Return: Sum of all data in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
