#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a list.
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
