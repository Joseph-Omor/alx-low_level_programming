#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a listint list.
 * @head: pointer to head of list
 *
 * Return: head node's data (n) or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int hold_data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	hold_data = (*head)->n;

	temp = *head; /* store the address of the current head node */

	/* Update the head pointer to point to the next node */
	*head = (*head)->next;

	/* free the memory of the original head node */
	free(temp);
	return (hold_data);
}
